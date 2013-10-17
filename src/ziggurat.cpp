// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-
//
// ziggurat.cpp: R wrapper for various Ziggurat implementations in RcppZiggurat
//
// Copyright (C) 2013  Dirk Eddelbuettel
//
// This file is part of RcppZiggurat.
//
// RcppZiggurat is free software: you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 2 of the License, or
// (at your option) any later version.
//
// RcppZiggurat is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with RcppZiggurat.  If not, see <http://www.gnu.org/licenses/>.

// trying a simple Ziggurat class based (initially) on John Burkardt's code
// Burkhardt implements the original paper  http://www.jstatsoft.org/v05/i08/paper
// but (initially) NOT the comment paper    http://www.jstatsoft.org/v12/i07/paper
// following email with Burkhard has modified
#include <Rcpp.h>

#include <ZigguratMT.h>     
#include <ZigguratLZLLV.h>     
#include <ZigguratV1.h>     
#include <ZigguratV1b.h>     
#include <Ziggurat.h>  
#include <ZigguratGSL.h>


// Version 1 -- Derived from Marsaglia and Tsang, JSS, 2000
static ZigguratMT ziggmt;

// Marsaglia and Tsang (JSS,2000)
// [[Rcpp::export]]
Rcpp::NumericVector zrnormMT(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = ziggmt.norm();
    }
    return x;
}
// [[Rcpp::export]]
void zsetseedMT(int s) {
    ziggmt.setSeed(s);
}



// Version 2 -- Derived from Leong et al, JSS, 2005
static ZigguratLZLLV zigglzllv;

// Marsaglia and Tsang (JSS,2000)
// [[Rcpp::export]]
Rcpp::NumericVector zrnormLZLLV(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = zigglzllv.norm();
    }
    return x;
}
// [[Rcpp::export]]
void zsetseedLZLLV(int s) {
    zigglzllv.setSeed(s);
}



// Version 3 -- Derived from John Burkardt's older implementation
static ZigguratV1 ziggv1;

// [[Rcpp::export]]
Rcpp::NumericVector zrnormV1(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = ziggv1.norm();
    }
    return x;
}

// [[Rcpp::export]]
Rcpp::NumericVector zrnormVecV1(Rcpp::NumericVector x) {
    int n = x.size();
    for (int i=0; i<n; i++) {
        x[i] = ziggv1.norm();
    }
    return x;
}

// [[Rcpp::export]]
std::vector<double> zrnormStlV1(int n) {
    std::vector<double> x(n);
    for (int i=0; i<n; i++) {
        x[i] = ziggv1.norm();
    }
    return x;
}

// [[Rcpp::export]]
void zsetseedV1(unsigned long int s) {
    ziggv1.setSeed(s);
    return;
}

// [[Rcpp::export]]
unsigned long int zgetseedV1() {
    return ziggv1.getSeed();
}




// Version 4 -- Derived from John Burkardt's new implementation of our mods
static Ziggurat zigg;

// [[Rcpp::export]]
Rcpp::NumericVector zrnorm(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = zigg.norm();
    }
    return x;
}

// [[Rcpp::export]]
Rcpp::NumericVector zrnormVec(Rcpp::NumericVector x) {
    int n = x.size();
    for (int i=0; i<n; i++) {
        x[i] = zigg.norm();
    }
    return x;
}

// [[Rcpp::export]]
std::vector<double> zrnormStl(int n) {
    std::vector<double> x(n);
    for (int i=0; i<n; i++) {
        x[i] = zigg.norm();
    }
    return x;
}

// [[Rcpp::export]]
void zsetseed(unsigned long int s) {
    zigg.setSeed(s);
    return;
}

// [[Rcpp::export]]
unsigned long int zgetseed() {
    return zigg.getSeed();
}



// Version 5 -- Wrapping the GSL version
static ZigguratGSL gsl;

// [[Rcpp::export]]
Rcpp::NumericVector zrnormgsl(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = gsl.norm();
    }
    return x;
}


// Version 5 -- Modified V1
static ZigguratV1b ziggv1b;

// [[Rcpp::export]]
Rcpp::NumericVector zrnormV1b(int n) {
    Rcpp::NumericVector x(n);
    for (int i=0; i<n; i++) {
        x[i] = ziggv1b.norm();
    }
    return x;
}

Zigg* getZiggurat(const std::string generator, const int seed) {
    if (generator=="MT") {
        return new ZigguratMT(seed); 
    } else if (generator=="LZLLV") {
        return new ZigguratLZLLV(seed); 
    } else if (generator=="V1") {
        return new ZigguratV1(seed); 
    } else if (generator=="Ziggurat") {
        return new Ziggurat(seed); 
    } else if (generator=="GSL") {
        return new ZigguratGSL(seed); 
    } else if (generator=="V1b") {
        return new ZigguratV1b(seed); 
    } 

    Rcpp::Rcout << "Unrecognised generator: " << generator << "\n";
    return NULL;
}

// [[Rcpp::export]]
Rcpp::NumericMatrix ziggbin(int nbins, double ndraws, 
                            const std::string generator = "Ziggurat", 
                            const int seed=42, int res = 40) {
    Rcpp::NumericMatrix v(res, nbins);
    const double grmin = -7;
    const double grmax = 7;
    const double d = (grmax - grmin)/nbins;

    Zigg *zigg = getZiggurat(generator, seed);

    double seglen = ndraws/res;

    // Yes, it crazy to write the inner loop with doubles. But the CRAN maintainers,
    // in their wisdom, still say that we cannot use C99 -- so no long long int for us.
    // And an unsigned long makes it only to 4.2e9 which is not enough for our use.
    for (int row=0.0; row<res; row++) {
        double i = 0.0;
        while (i<seglen) {
            double val = zigg->norm();              // N(0,1) draw 
            
            int can = floor((val - grmin)/d);       // find the 'can' to bin it in
            can = (can < 0) ? 0 : can;              // protect can from being below 0
            can = (can > nbins-1) ? nbins-1 : can;  // or past the last can
            v(row,can) = v(row,can)++;              // increment counter
            i = i + 1.0;
        }
        if (row < res-1) {
            v(row+1,Rcpp::_) = v(row,Rcpp::_);
        }
    }

    delete zigg;

    return v;
}



// [[Rcpp::export]]
Rcpp::NumericVector ziggsum(int nbins, double ndraws, 
                            const std::string generator = "Ziggurat", 
                            const int seed=42) {
    Rcpp::NumericVector vec(nbins);
    Rcpp::NumericVector normals(ndraws);
    
    Zigg *zigg = getZiggurat(generator, seed);

    for (int i=0; i<nbins; i++) {
        for (int j=0; j<ndraws; j++) {
            normals[j] = zigg->norm();
        }
        vec[i] = sum(normals);
    }

    delete zigg;

    return vec;
}


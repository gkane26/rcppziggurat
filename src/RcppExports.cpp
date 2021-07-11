// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppZiggurat.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// zrnormMT
Rcpp::NumericVector zrnormMT(int n);
static SEXP _RcppZiggurat_zrnormMT_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormMT(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormMT(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormMT_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedMT
void zsetseedMT(int s);
static SEXP _RcppZiggurat_zsetseedMT_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    zsetseedMT(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedMT(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedMT_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormLZLLV
Rcpp::NumericVector zrnormLZLLV(int n);
static SEXP _RcppZiggurat_zrnormLZLLV_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormLZLLV(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormLZLLV(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormLZLLV_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedLZLLV
void zsetseedLZLLV(int s);
static SEXP _RcppZiggurat_zsetseedLZLLV_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    zsetseedLZLLV(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedLZLLV(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedLZLLV_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormV1
Rcpp::NumericVector zrnormV1(int n);
static SEXP _RcppZiggurat_zrnormV1_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormV1(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormV1(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormV1_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormVecV1
Rcpp::NumericVector zrnormVecV1(Rcpp::NumericVector x);
static SEXP _RcppZiggurat_zrnormVecV1_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormVecV1(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormVecV1(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormVecV1_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormStlV1
std::vector<double> zrnormStlV1(int n);
static SEXP _RcppZiggurat_zrnormStlV1_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormStlV1(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormStlV1(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormStlV1_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedV1
void zsetseedV1(unsigned long int s);
static SEXP _RcppZiggurat_zsetseedV1_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP);
    zsetseedV1(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedV1(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedV1_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zgetseedV1
unsigned long int zgetseedV1();
static SEXP _RcppZiggurat_zgetseedV1_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(zgetseedV1());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zgetseedV1() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zgetseedV1_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnorm
Rcpp::NumericVector zrnorm(int n);
static SEXP _RcppZiggurat_zrnorm_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnorm(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnorm(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnorm_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormVec
Rcpp::NumericVector zrnormVec(Rcpp::NumericVector x);
static SEXP _RcppZiggurat_zrnormVec_try(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormVec(x));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormVec(SEXP xSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormVec_try(xSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormStl
std::vector<double> zrnormStl(int n);
static SEXP _RcppZiggurat_zrnormStl_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormStl(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormStl(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormStl_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseed
void zsetseed(unsigned long int s);
static SEXP _RcppZiggurat_zsetseed_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP);
    zsetseed(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseed(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseed_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zgetseed
unsigned long int zgetseed();
static SEXP _RcppZiggurat_zgetseed_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(zgetseed());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zgetseed() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zgetseed_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zgetpars
Rcpp::NumericVector zgetpars();
static SEXP _RcppZiggurat_zgetpars_try() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    rcpp_result_gen = Rcpp::wrap(zgetpars());
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zgetpars() {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zgetpars_try());
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetpars
void zsetpars(Rcpp::NumericVector p);
static SEXP _RcppZiggurat_zsetpars_try(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type p(pSEXP);
    zsetpars(p);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetpars(SEXP pSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetpars_try(pSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedGSL
void zsetseedGSL(const uint32_t s);
static SEXP _RcppZiggurat_zsetseedGSL_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< const uint32_t >::type s(sSEXP);
    zsetseedGSL(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedGSL(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedGSL_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormGSL
Rcpp::NumericVector zrnormGSL(int n);
static SEXP _RcppZiggurat_zrnormGSL_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormGSL(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormGSL(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormGSL_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormV1b
Rcpp::NumericVector zrnormV1b(int n);
static SEXP _RcppZiggurat_zrnormV1b_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormV1b(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormV1b(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormV1b_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormQL
Rcpp::NumericVector zrnormQL(int n);
static SEXP _RcppZiggurat_zrnormQL_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormQL(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormQL(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormQL_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedQL
void zsetseedQL(unsigned long int s);
static SEXP _RcppZiggurat_zsetseedQL_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP);
    zsetseedQL(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedQL(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedQL_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormGl
Rcpp::NumericVector zrnormGl(int n);
static SEXP _RcppZiggurat_zrnormGl_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormGl(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormGl(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormGl_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zsetseedGl
void zsetseedGl(unsigned long int s);
static SEXP _RcppZiggurat_zsetseedGl_try(SEXP sSEXP) {
BEGIN_RCPP
    Rcpp::traits::input_parameter< unsigned long int >::type s(sSEXP);
    zsetseedGl(s);
    return R_NilValue;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zsetseedGl(SEXP sSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zsetseedGl_try(sSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// zrnormR
Rcpp::NumericVector zrnormR(int n);
static SEXP _RcppZiggurat_zrnormR_try(SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(zrnormR(n));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_zrnormR(SEXP nSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_zrnormR_try(nSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// ziggbin
Rcpp::NumericMatrix ziggbin(int nbins, double ndraws, const std::string generator, const int seed, int edge, int res);
static SEXP _RcppZiggurat_ziggbin_try(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP, SEXP edgeSEXP, SEXP resSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP);
    Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    Rcpp::traits::input_parameter< int >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< int >::type res(resSEXP);
    rcpp_result_gen = Rcpp::wrap(ziggbin(nbins, ndraws, generator, seed, edge, res));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_ziggbin(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP, SEXP edgeSEXP, SEXP resSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_ziggbin_try(nbinsSEXP, ndrawsSEXP, generatorSEXP, seedSEXP, edgeSEXP, resSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// ziggsum
Rcpp::NumericVector ziggsum(int nbins, double ndraws, const std::string generator, const int seed);
static SEXP _RcppZiggurat_ziggsum_try(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP);
    Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(ziggsum(nbins, ndraws, generator, seed));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_ziggsum(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_ziggsum_try(nbinsSEXP, ndrawsSEXP, generatorSEXP, seedSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// ziggtest
Rcpp::NumericVector ziggtest(int nbins, double ndraws, const std::string generator, const int seed);
static SEXP _RcppZiggurat_ziggtest_try(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int >::type nbins(nbinsSEXP);
    Rcpp::traits::input_parameter< double >::type ndraws(ndrawsSEXP);
    Rcpp::traits::input_parameter< const std::string >::type generator(generatorSEXP);
    Rcpp::traits::input_parameter< const int >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(ziggtest(nbins, ndraws, generator, seed));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _RcppZiggurat_ziggtest(SEXP nbinsSEXP, SEXP ndrawsSEXP, SEXP generatorSEXP, SEXP seedSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_RcppZiggurat_ziggtest_try(nbinsSEXP, ndrawsSEXP, generatorSEXP, seedSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _RcppZiggurat_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("Rcpp::NumericVector(*zrnormMT)(int)");
        signatures.insert("void(*zsetseedMT)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormLZLLV)(int)");
        signatures.insert("void(*zsetseedLZLLV)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormV1)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormVecV1)(Rcpp::NumericVector)");
        signatures.insert("std::vector<double>(*zrnormStlV1)(int)");
        signatures.insert("void(*zsetseedV1)(unsigned long int)");
        signatures.insert("unsigned long int(*zgetseedV1)()");
        signatures.insert("Rcpp::NumericVector(*zrnorm)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormVec)(Rcpp::NumericVector)");
        signatures.insert("std::vector<double>(*zrnormStl)(int)");
        signatures.insert("void(*zsetseed)(unsigned long int)");
        signatures.insert("unsigned long int(*zgetseed)()");
        signatures.insert("Rcpp::NumericVector(*zgetpars)()");
        signatures.insert("void(*zsetpars)(Rcpp::NumericVector)");
        signatures.insert("void(*zsetseedGSL)(const uint32_t)");
        signatures.insert("Rcpp::NumericVector(*zrnormGSL)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormV1b)(int)");
        signatures.insert("Rcpp::NumericVector(*zrnormQL)(int)");
        signatures.insert("void(*zsetseedQL)(unsigned long int)");
        signatures.insert("Rcpp::NumericVector(*zrnormGl)(int)");
        signatures.insert("void(*zsetseedGl)(unsigned long int)");
        signatures.insert("Rcpp::NumericVector(*zrnormR)(int)");
        signatures.insert("Rcpp::NumericMatrix(*ziggbin)(int,double,const std::string,const int,int,int)");
        signatures.insert("Rcpp::NumericVector(*ziggsum)(int,double,const std::string,const int)");
        signatures.insert("Rcpp::NumericVector(*ziggtest)(int,double,const std::string,const int)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _RcppZiggurat_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormMT", (DL_FUNC)_RcppZiggurat_zrnormMT_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedMT", (DL_FUNC)_RcppZiggurat_zsetseedMT_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormLZLLV", (DL_FUNC)_RcppZiggurat_zrnormLZLLV_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedLZLLV", (DL_FUNC)_RcppZiggurat_zsetseedLZLLV_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormV1", (DL_FUNC)_RcppZiggurat_zrnormV1_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormVecV1", (DL_FUNC)_RcppZiggurat_zrnormVecV1_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormStlV1", (DL_FUNC)_RcppZiggurat_zrnormStlV1_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedV1", (DL_FUNC)_RcppZiggurat_zsetseedV1_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zgetseedV1", (DL_FUNC)_RcppZiggurat_zgetseedV1_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnorm", (DL_FUNC)_RcppZiggurat_zrnorm_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormVec", (DL_FUNC)_RcppZiggurat_zrnormVec_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormStl", (DL_FUNC)_RcppZiggurat_zrnormStl_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseed", (DL_FUNC)_RcppZiggurat_zsetseed_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zgetseed", (DL_FUNC)_RcppZiggurat_zgetseed_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zgetpars", (DL_FUNC)_RcppZiggurat_zgetpars_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetpars", (DL_FUNC)_RcppZiggurat_zsetpars_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedGSL", (DL_FUNC)_RcppZiggurat_zsetseedGSL_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormGSL", (DL_FUNC)_RcppZiggurat_zrnormGSL_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormV1b", (DL_FUNC)_RcppZiggurat_zrnormV1b_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormQL", (DL_FUNC)_RcppZiggurat_zrnormQL_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedQL", (DL_FUNC)_RcppZiggurat_zsetseedQL_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormGl", (DL_FUNC)_RcppZiggurat_zrnormGl_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zsetseedGl", (DL_FUNC)_RcppZiggurat_zsetseedGl_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_zrnormR", (DL_FUNC)_RcppZiggurat_zrnormR_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_ziggbin", (DL_FUNC)_RcppZiggurat_ziggbin_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_ziggsum", (DL_FUNC)_RcppZiggurat_ziggsum_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_ziggtest", (DL_FUNC)_RcppZiggurat_ziggtest_try);
    R_RegisterCCallable("RcppZiggurat", "_RcppZiggurat_RcppExport_validate", (DL_FUNC)_RcppZiggurat_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppZiggurat_zrnormMT", (DL_FUNC) &_RcppZiggurat_zrnormMT, 1},
    {"_RcppZiggurat_zsetseedMT", (DL_FUNC) &_RcppZiggurat_zsetseedMT, 1},
    {"_RcppZiggurat_zrnormLZLLV", (DL_FUNC) &_RcppZiggurat_zrnormLZLLV, 1},
    {"_RcppZiggurat_zsetseedLZLLV", (DL_FUNC) &_RcppZiggurat_zsetseedLZLLV, 1},
    {"_RcppZiggurat_zrnormV1", (DL_FUNC) &_RcppZiggurat_zrnormV1, 1},
    {"_RcppZiggurat_zrnormVecV1", (DL_FUNC) &_RcppZiggurat_zrnormVecV1, 1},
    {"_RcppZiggurat_zrnormStlV1", (DL_FUNC) &_RcppZiggurat_zrnormStlV1, 1},
    {"_RcppZiggurat_zsetseedV1", (DL_FUNC) &_RcppZiggurat_zsetseedV1, 1},
    {"_RcppZiggurat_zgetseedV1", (DL_FUNC) &_RcppZiggurat_zgetseedV1, 0},
    {"_RcppZiggurat_zrnorm", (DL_FUNC) &_RcppZiggurat_zrnorm, 1},
    {"_RcppZiggurat_zrnormVec", (DL_FUNC) &_RcppZiggurat_zrnormVec, 1},
    {"_RcppZiggurat_zrnormStl", (DL_FUNC) &_RcppZiggurat_zrnormStl, 1},
    {"_RcppZiggurat_zsetseed", (DL_FUNC) &_RcppZiggurat_zsetseed, 1},
    {"_RcppZiggurat_zgetseed", (DL_FUNC) &_RcppZiggurat_zgetseed, 0},
    {"_RcppZiggurat_zgetpars", (DL_FUNC) &_RcppZiggurat_zgetpars, 0},
    {"_RcppZiggurat_zsetpars", (DL_FUNC) &_RcppZiggurat_zsetpars, 1},
    {"_RcppZiggurat_zsetseedGSL", (DL_FUNC) &_RcppZiggurat_zsetseedGSL, 1},
    {"_RcppZiggurat_zrnormGSL", (DL_FUNC) &_RcppZiggurat_zrnormGSL, 1},
    {"_RcppZiggurat_zrnormV1b", (DL_FUNC) &_RcppZiggurat_zrnormV1b, 1},
    {"_RcppZiggurat_zrnormQL", (DL_FUNC) &_RcppZiggurat_zrnormQL, 1},
    {"_RcppZiggurat_zsetseedQL", (DL_FUNC) &_RcppZiggurat_zsetseedQL, 1},
    {"_RcppZiggurat_zrnormGl", (DL_FUNC) &_RcppZiggurat_zrnormGl, 1},
    {"_RcppZiggurat_zsetseedGl", (DL_FUNC) &_RcppZiggurat_zsetseedGl, 1},
    {"_RcppZiggurat_zrnormR", (DL_FUNC) &_RcppZiggurat_zrnormR, 1},
    {"_RcppZiggurat_ziggbin", (DL_FUNC) &_RcppZiggurat_ziggbin, 6},
    {"_RcppZiggurat_ziggsum", (DL_FUNC) &_RcppZiggurat_ziggsum, 4},
    {"_RcppZiggurat_ziggtest", (DL_FUNC) &_RcppZiggurat_ziggtest, 4},
    {"_RcppZiggurat_RcppExport_registerCCallable", (DL_FUNC) &_RcppZiggurat_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppZiggurat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

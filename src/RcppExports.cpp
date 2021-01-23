// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// C_vert_in_sphere
NumericVector C_vert_in_sphere(S4 las, double radius, int ncpu);
RcppExport SEXP _spanner_C_vert_in_sphere(SEXP lasSEXP, SEXP radiusSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_vert_in_sphere(las, radius, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_count_in_disc
IntegerVector C_count_in_disc(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, double radius, int ncpu);
RcppExport SEXP _spanner_C_count_in_disc(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP radiusSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_count_in_disc(X, Y, x, y, radius, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_count_in_sphere
IntegerVector C_count_in_sphere(S4 las, double radius, int ncpu);
RcppExport SEXP _spanner_C_count_in_sphere(SEXP lasSEXP, SEXP radiusSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_count_in_sphere(las, radius, ncpu));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_spanner_C_vert_in_sphere", (DL_FUNC) &_spanner_C_vert_in_sphere, 3},
    {"_spanner_C_count_in_disc", (DL_FUNC) &_spanner_C_count_in_disc, 6},
    {"_spanner_C_count_in_sphere", (DL_FUNC) &_spanner_C_count_in_sphere, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_spanner(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

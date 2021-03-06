// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// logsumexp
double logsumexp(arma::vec logv_arma);
RcppExport SEXP _rewind_logsumexp(SEXP logv_armaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type logv_arma(logv_armaSEXP);
    rcpp_result_gen = Rcpp::wrap(logsumexp(logv_arma));
    return rcpp_result_gen;
END_RCPP
}
// mat_times_vec_by_col
arma::mat mat_times_vec_by_col(arma::mat m, arma::vec v);
RcppExport SEXP _rewind_mat_times_vec_by_col(SEXP mSEXP, SEXP vSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    rcpp_result_gen = Rcpp::wrap(mat_times_vec_by_col(m, v));
    return rcpp_result_gen;
END_RCPP
}
// log_full
arma::vec log_full(arma::mat Y, arma::mat eta_star, arma::mat Q, arma::vec p, arma::vec theta, arma::vec psi);
RcppExport SEXP _rewind_log_full(SEXP YSEXP, SEXP eta_starSEXP, SEXP QSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta_star(eta_starSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(log_full(Y, eta_star, Q, p, theta, psi));
    return rcpp_result_gen;
END_RCPP
}
// log_marginal
double log_marginal(arma::mat Y, arma::mat eta_star_enumerate, arma::mat Q, arma::vec p, arma::vec theta, arma::vec psi);
RcppExport SEXP _rewind_log_marginal(SEXP YSEXP, SEXP eta_star_enumerateSEXP, SEXP QSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type eta_star_enumerate(eta_star_enumerateSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(log_marginal(Y, eta_star_enumerate, Q, p, theta, psi));
    return rcpp_result_gen;
END_RCPP
}
// log_marginal_Q_identity
double log_marginal_Q_identity(arma::mat Y, arma::vec p, arma::vec theta, arma::vec psi);
RcppExport SEXP _rewind_log_marginal_Q_identity(SEXP YSEXP, SEXP pSEXP, SEXP thetaSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type p(pSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(log_marginal_Q_identity(Y, p, theta, psi));
    return rcpp_result_gen;
END_RCPP
}
// equal_unit_vec
bool equal_unit_vec(arma::vec v, int k);
RcppExport SEXP _rewind_equal_unit_vec(SEXP vSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type v(vSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(equal_unit_vec(v, k));
    return rcpp_result_gen;
END_RCPP
}
// compute_Q_condpr
double compute_Q_condpr(arma::mat Q, arma::mat H, arma::vec Yl, int k, int l, double theta, double psi);
RcppExport SEXP _rewind_compute_Q_condpr(SEXP QSEXP, SEXP HSEXP, SEXP YlSEXP, SEXP kSEXP, SEXP lSEXP, SEXP thetaSEXP, SEXP psiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type H(HSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type Yl(YlSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type l(lSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< double >::type psi(psiSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_Q_condpr(Q, H, Yl, k, l, theta, psi));
    return rcpp_result_gen;
END_RCPP
}
// z2comat
arma::mat z2comat(arma::mat z);
RcppExport SEXP _rewind_z2comat(SEXP zSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    rcpp_result_gen = Rcpp::wrap(z2comat(z));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rewind_logsumexp", (DL_FUNC) &_rewind_logsumexp, 1},
    {"_rewind_mat_times_vec_by_col", (DL_FUNC) &_rewind_mat_times_vec_by_col, 2},
    {"_rewind_log_full", (DL_FUNC) &_rewind_log_full, 6},
    {"_rewind_log_marginal", (DL_FUNC) &_rewind_log_marginal, 6},
    {"_rewind_log_marginal_Q_identity", (DL_FUNC) &_rewind_log_marginal_Q_identity, 4},
    {"_rewind_equal_unit_vec", (DL_FUNC) &_rewind_equal_unit_vec, 2},
    {"_rewind_compute_Q_condpr", (DL_FUNC) &_rewind_compute_Q_condpr, 7},
    {"_rewind_z2comat", (DL_FUNC) &_rewind_z2comat, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_rewind(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

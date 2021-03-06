% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils.R
\name{eval_string}
\alias{eval_string}
\title{create a string with parts that need to be replaced by a variable's actual values}
\usage{
eval_string(x, nm_in_x, val)
}
\arguments{
\item{x}{quote(something)}

\item{nm_in_x}{the string to in x to be replaced by val (could be a vector)}

\item{val}{the value to be inserted at "nm_in_x" (could be a vector)}
}
\value{
an expression with
}
\description{
create a string with parts that need to be replaced by a variable's actual values
}
\examples{
mytitle <- quote(paste("(",Y[il],"): ",blabla,collapse=""))
xx <- "design"
eval_string(mytitle,"blabla",xx)

mytitle <- eval_string(quote(paste(a,"--",b,"--","--",c,"--",d)),
   c("a","b","c","d"),c("Thanks","for","using","rewind!"))
plot(rnorm(10),rnorm(10),main=mytitle)
}

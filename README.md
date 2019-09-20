# floatingCompare
Library with function to compare floating point numbers

The underlying bit representation of floating point numbers and potentially cause difficulties in comparing the equality of floating point number. This library uses the standard epsilon to test if two floating point numbers are close enough when checking for equality. 

equalEqual is meant to be used like ==

notEqual is meant to be used like !=

lessEqual is meant to be used like <=

greaterEqual is meant to be used like >=

Each function has an epsilon, c, with a default value of 1e-6 that determines how precise it is in checking for equality. To set your own custom precision, just add in a third floating point parameter in the function call after the two values being compared.

#!/usr/bin/python

import sys

def suma():
    """
    Esta funcion suma n numeros.
    """
    Arguments = sys.argv[1:]
    Result = 0.0
    for argument in Arguments:
        Result += float(argument)
    print "El resultado es: " + str(Result)

suma()

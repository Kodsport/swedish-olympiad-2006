#!/usr/bin/python3
import re
import sys

int_pat = "(0|[1-9][0-9]*)"
input_re = "^" + int_pat + " " + int_pat + "$"

line = sys.stdin.readline()
assert re.match(input_re, line)
a, b = [int(x) for x in line.split()]
assert 1 <= a
assert 1 <= b <= 100

line = sys.stdin.readline()
assert len(line) == 0
sys.exit(42)

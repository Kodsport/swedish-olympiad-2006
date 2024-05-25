#!/usr/bin/env bash

. ../../../testdata_tools/gen.sh

use_solution joshua.cpp

compile gen_rand.py

samplegroup
sample 0
sample 1


group group1 100
include_group sample
tc_manual ramsan1
tc_manual ramsan2
tc_manual ramsan3


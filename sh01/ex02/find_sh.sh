#!/bin/sh

find $pwd -type f -name "*.sh" -exec basename {} .sh \;

#!/bin/sh
find . -name "*.sh" -execdir basename {} .sh ';'

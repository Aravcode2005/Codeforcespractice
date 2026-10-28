#!/bin/bash

git add .

echo "Enter the commitmessage"
 
read commitmessage

echo "Your  commit message is $commitmessage"

git commit -m "$commitmessage"

git fetch origin

git push origin cp31

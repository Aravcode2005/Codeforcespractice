#!/bin/bash

git add .

processcode=$?

echo $processcode

if [ $processcode -ne 0 ]; then

   echo "Failed with a exit code of $? "

   exit 1

fi

echo "Success"




echo "Enter the commit message"
 
read commitmessage

echo "Your  commit message is $commitmessage"

git commit -m "$commitmessage"


if [ $processcode -ne 0 ]; then

   echo "Failed with a exit code of $? "

   exit 1

fi

echo "Success"

echo "Syncing to the  origin,please wait ...."
git fetch origin

if [ $processcode -ne 0 ]; then

   echo "Failed with a exit code of $? "

   exit 1

fi

echo "Success"

echo "Pushing to the origin"

currentbranch=$(git branch)

git push origin  $currentbranch

if [ $processcode -ne 0 ]; then

   echo "Failed with a exit code of $? "

   exit 1

fi

echo "Success"
exit 0

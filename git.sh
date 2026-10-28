#!/bin/bash


function completed(){

  if [ $? -ne 0 ] ; then

   echo " Failed with a exit code of $? "

   exit 1

  fi

  echo " Success "

}

git add .



echo "Enter the commit message"

read commitmessage

echo "Your  commit message is $commitmessage"

git commit -m "$commitmessage"


echo "Syncing to the  origin,please wait ...."

git fetch origin


echo "Do you want to create a new branch or switch branches?"

echo "Enter yes or Yes or YES or Y or y"

read output 

if [ $output == "yes" || $output == "Yes" ||  $output == "YES" || $output == 'Y' || $output == 'y' ] ; then

   echo "Create a branch (a) , switch branches (b) , both (c)"

   read option

   if [   $option == "a" ]; then
 
      echo "Enter the name of the branch you want to create"

      read branchname

      git branch $branchname


  elif [  $option == "b" ]; then 

        echo "Enter a valid branch name"

        read branchex

        git switch $branchex

               
  elif [ $option == "c" ];  then 
        
      echo "Enter the name of the branch you want to create"

      read branchname

      git branch $branchname

      echo "Syncing......"

      echo "Enter a valid branch name"

      read branchex

      git switch $branchex

      echo "Done!"

fi  

echo "Ok moving on"

gitbranch=$(git branch)

echo "Pushing to $gitbranch"

git push origin cp31

exit 0

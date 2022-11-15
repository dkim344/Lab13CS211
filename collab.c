// Collaborative code file, Lab 13
// 
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing 
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this code!
// 
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
// 
// An example is shown below.
// 
// UIC CS 211, Fall 2022
#include <stdio.h>

void reed_ekidan2() {
  printf("Dale Reed and Ellen Kidane\n");
  printf("We learned that git and GitHub are amazing, powerful tools!\n");
}

void dkim_mansa3444(){
  
  printf("Daniel Kim and Wajahat Ansari\n");
  
  printf("We learned that although they sound similar, git and Github are not the same thing. Git is a way to manage repositories and versions of programs locally on your machine, while Github is a remote (cloud-based) service where you can create and store repositories. However, the two can be used in tandem to create a seamless workflow that lends itself to collaborative programming. When programming with other people, you can have a repository on Github where the team's code is to be stored. You can clone from the respository to get the code and edit it locally on your machine, and after making edits, you can push the changes/commits back to the Github repository by using git commands. This way, the whole team can have a central repository where every group member can push in their own changes to the overlying project.\n");
  
  printf("Two people are collaborating on this code!");
}

int main()
{
    printf("This code has been created by the students of CS 211, Fall 2022!\n\n");
    
    dkim_mansa3444();
    
    return 0;
}

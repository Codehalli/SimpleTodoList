// implement any classes or free functions here

#include "todo.hpp"
using namespace std;

//TA implementation
TodoCl::TodoCl() //Constructor for Todo Class
{
    fin = ' ';
    
    txt = "";
    
    pChar= 'Z';
    
    fin = pChar;
    
    out_file = "todo.txt";
}

TodoCl::~TodoCl() //Destructor For Todo Class
{}

bool TodoCl::operator==(TodoCl x) const //Operator Constructor
{
    TodoCl x1 = *this;
    return(x1.fin == x.fin && x1.txt == x.txt && x1.pChar == x1.pChar && x1.prom == x.prom);
}


void TodoCl::setTxt(std::string task) //Setting the task
{
    txt = task;
}

char TodoCl::getProm() //get the right character
{
    return pChar;
}

std::string TodoCl::getTxt() //get the text
{
    return txt;
}

int TodoCl::getPromVal() //get right character
{
    return prom;
}


void TodoCl::finishT() //Finish the text
{
    fin = 'a'; //setting the right value
    prom = prom + 26; //since 26 letter in the alphabet
}

void TodoCl::setProm(char priority) //set the right character
{
    pChar = priority;
    prom = pChar;
}

bool TodoCl::getFin() //Finish text
{
    return(fin == 'a');
}





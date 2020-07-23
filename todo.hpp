// implement any classes or free functions here

#include <string>
#include <vector>
#include <iostream>
#include <fstream>

#include "list.hpp"
#include "sorted_list.hpp"

using namespace std;

class TodoCl //creation a to do class
{
private: //private variables
    char fin, pChar;
    std::string txt;
    int  prom;
    std::string out_file; //declaring the output file
public:
    
    TodoCl(); //Constructor for Todo Class
    ~TodoCl(); //Destructor For Todo Class
    
    void finishT(); //finish the text
    void setProm(char priority ); //Based on AScii chart set it properly
    void setTxt(std::string task); //Setting the task
    void setPromVal();//set the right character
    

    bool getFin();//Finisht text
    char getProm();//get right character
    std::string getTxt();
    int getPromVal(); //get right character
    
    bool operator==(TodoCl x) const;
    //bool operator>(TodoCl x) const;
    
    void listTasks(int index);
    
};



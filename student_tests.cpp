#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "list.hpp"
#include "sorted_list.hpp"

//Created Test for fuctions that had to be modified or created

/** First 7 Tests are for the List **/

//Checking the Copy Constructor
TEST_CASE( "Copy Constructor for  List" )
{
    List<int> myList;
    myList.insert(1,1);
    myList.insert(2,2);
    List<int> myNewList (myList);
    
    REQUIRE(myNewList.getLength() == myList.getLength());
    REQUIRE(myNewList.getEntry(1) == 1);
    REQUIRE(myNewList.getEntry(2) == 2);
}

//Checking the Copy Operator
TEST_CASE( "Copy Operaator for List" )
{
    List<int> myList;
    myList.insert(1,1);
    myList.insert(2,2);
    List<int> myNewList (myList);
    
    REQUIRE(myNewList.getLength() == myList.getLength());
    REQUIRE(myNewList.getEntry(1) == 1);
    REQUIRE(myNewList.getEntry(2) == 2);
}

//Checking Default Constructor
TEST_CASE( "Default Constructor of List" )
{
    List<int> myList;
    REQUIRE(myList.isEmpty());
}

//Checking getLength function
TEST_CASE( "GetLength for List" )
{
    List<int> myList;
    myList.insert(4,2);
    REQUIRE(myList.getLength() == 0);
    myList.insert(6,3);
    REQUIRE(myList.getLength() == 0);
}

//Checking Remove function
TEST_CASE( "Remove for List")
{
    List<int> myList;
    myList.insert(1,1);
    myList.insert(2,2);
  
    //Middle position
    REQUIRE(myList.remove(1));
    REQUIRE(myList.getLength() == 1);
    //Last Index
    REQUIRE(myList.remove(1));
    REQUIRE(myList.getLength() == 0);
}

//Checking Clear function
TEST_CASE( "Clear function for List" )
{
    List<int> myList;
    myList.clear();
    REQUIRE(myList.isEmpty());
}


//Checking the Set Entry functions
TEST_CASE( "Set Entry Function for List" )
{
    List<int> myList;
    REQUIRE(myList.insert(1,1));
    REQUIRE(myList.insert(2,2));

    REQUIRE(myList.getEntry(1) == 1);
    REQUIRE(myList.getEntry(2) == 2);
}

/** Last 5 Tests are for the SortList **/

//Checking the Copy Constructor
TEST_CASE( "Copy Constructor for  Sorted List" )
{
    SortedList<int> myList;
    myList.insertSorted(1);
    myList.insertSorted(2);
    SortedList<int> myNewList (myList);
    
    REQUIRE(myNewList.getLength() == myList.getLength());
    REQUIRE(myNewList.getEntry(1) == 1);
    REQUIRE(myNewList.getEntry(2) == 2);
    
}

//Checking the Copy Operator
TEST_CASE( "Copy Operator for Sorted List" )
{
    SortedList<int> myList;
    myList.insertSorted(1);
    myList.insertSorted(2);
    SortedList<int> myNewList (myList);
    
    REQUIRE(myNewList.getLength() == myList.getLength());
    REQUIRE(myNewList.getEntry(1) == 1);
    REQUIRE(myNewList.getEntry(2) == 2);
}

//Checking Default Constructor
TEST_CASE( "Default Constructor for Sorted List" )
{
    SortedList<int> myList;
    REQUIRE(myList.isEmpty());
}

//Checking Remove function
TEST_CASE( "Remove for List for Sorted List ")
{
    SortedList<int> myList;
    myList.insertSorted(2);
    myList.insertSorted(4);
    
    //Removes Middle Position
    REQUIRE(myList.remove(2));
    
}

//Checking Clear function
TEST_CASE( "Clear function for Sorted List" )
{
    SortedList<int> myList;
    myList.clear();
    REQUIRE(myList.isEmpty());
}



//implement any classes or free functions here

#include "sorted_list.hpp"
#include "todo.hpp"

/**Main Todo attempt uncomment to see the only on command line**/
/*
void add(TodoCl todo, SortedList<TodoCl>* todoList); //add to the list

void add(TodoCl todo, SortedList<TodoCl>* todoList)
{
    todoList->insertSorted(todo);
}

void TodoCl::setTxt(std::string task)
{
    txt = task;
}

void TodoCl::finishT()
{
    fin = 'a';
    prom = prom + 26;
    
}

bool TodoCl::getFin()
{
    return(fin == 'a');
}
*/
int main(int argc, char *argv[])
{
 /*   SortedList<TodoCl> todoList;

    int i = 1;
    
    std::string enter;
    std::cin >> enter;
    
    
    for (int i; i; i++)
    {
        if(enter  == "add") //add something
        {
            std::string enterA;
            std::cin >> enterA;
            if(enterA == "-p") {
                char importance;
                std::cin >> importance;
                std::string text;
                getline(std::cin, text);
                
                TodoCl todo;
                
                add(todo, &todoList);
        }
        else
        {
                std::string text;
                getline(std::cin, text);
                
                enterA = enterA + text;
                TodoCl todo;
                add(todo, &todoList);
        }
    }
        
        if(enter == "-f") //enter -f
        {
            std::string file;
            std::cin >> file;
        }
        else if(enter == "list") //enter the list
        {
            
            for(std::size_t i = 1; i <= todoList.getLength();i++)
            {
                todoList.getEntry(i).listTasks(i);
            }
            
        }
        else if (enter == "do") //enter the do
        {
            std::size_t enter2;
            std::cin >> enter2;
            
            TodoCl comp;
            comp.setTxt(todoList.getEntry(enter2).getTxt());
            //done.setImportance(todoList.getEntrenter).getImportance());
            //done.completeTask();
            todoList.remove(enter2);
            add(comp, &todoList);
        }
        std::cin >> enter;
    } */
}








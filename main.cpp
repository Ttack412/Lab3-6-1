/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ttackett
 *
 * Created on September 11, 2017, 2:17 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int var = 0;

//first method with one parameter
void increment(int variable)
{
    var = variable + 1;
}

//second method with two parameter
void increment(int variable, int i)
{
     var = variable + i;
}

//runs the math
int main(void) {
    
for(int i = 0; i < 10; i++)
{
    if(i % 2)     
    {
        //calls increment with one parameter
        increment(var);
    }   
    else
    {
         //calls increment with two parameter
        increment(var,i); 
    }
}

cout << var << endl; 
return 0;
}



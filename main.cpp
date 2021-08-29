#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 
 int / float / bool / double / char / unsigned int

 vector / static / auto not primitives?  
 
 
 

 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number;
    int number2;
    int output;
    
    
    float gain;
    float threshold;
    float ratio;
    
    bool bypass;
    bool systemOn;
    bool bypassComp;

    double importantProcess;
    double freq;
    double numbers;
    
 //unsure about how and why double and unsigned int 

    char jam;
    char toast;
    char sugar; 
//unsigned
    unsigned int Ad;
    unsigned int A1;
    unsigned int Ab;
    //(all are undefined values just the Declarations)
  //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    

    
    ignoreUnused(number, number2, output, gain, threshold, ratio, bypass, systemOn, bypassComp, importantProcess, freq, numbers, jam, toast, sugar,Ad, A1,Ab); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */ 
 

    bool compression (int x = 12, int gain = 1)
   {
        ignoreUnused(compression, x, gain);
        return {};
   } 
/*
 2)
 */
    int parameters (float gain = 0.5f, int threshold = -50, bool peak = true, int ratio = 4)
    {

 ignoreUnused(gain, threshold, peak, ratio);
 return {};

    }

/*
 3)
 */
    bool bypass (int freq = 120)
    {
        ignoreUnused(freq);
        return {};
    }
/*
 4)
 */
    double importantProcess (int freq = 100, int peakFilter = 10) 
    {
        ignoreUnused(freq, peakFilter);
        return {};
    }
/*
 5)
 */
   char ingrediantUnits (char toast = 2, char jam = 3)
    {
        ignoreUnused(toast, jam);
        return {};
    }
     
/*
 6)
 */

 int grades (char tom = 2, char harry = 1)
 {
     ignoreUnused(tom, harry);
     return int {};
 }

 
/*
 7) 
 */

/*
 8)
 */

/*
 9)
 */

/*
 10)
 */

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int params = compression(12, 1); 
    //2)
    auto vocalcomp = parameters(1.f,60, false, 6);
    //3)
    int LFO = bypass(120);
    //4)
    double toughDSP = importantProcess(200,20);
    //5)
    char food = ingrediantUnits(2,1);
    //6)
    float gradesAndAverages = grades(2+1)/2;
    //7)
  
    //9)
    
    //10)
    
    
    ignoreUnused(carRented,params,vocalcomp,LFO,toughDSP,food,gradesAndAverages);
    std::cout << "good to go!" << std::endl;
    std::cout << "params set!" << std::endl;
    return 0;    
}

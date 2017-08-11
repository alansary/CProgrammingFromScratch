/*
 *   Title: Pointers 728 : A Computer Simulator
 *   Author: aeriqusyairi
 *   Date: Mac11 2012
 */
 
#include<stdio.h>

#define LIMIT 100
#define SENTINEL -99999

//operationcode
#define READ 10
#define WRITE 11
#define LOAD 20
#define STORE 21
#define ADD 30
#define SUBTRACT 31
#define DIVIDE 32
#define MULTIPLY 33
#define BRANCH 40
#define BRANCHNEG 41
#define BRANCHZERO 42
#define HALT 43

#define TERMINATED 50

void intro( void );//display intro interface
void instruct( int memory[] );//get the instruction from user
void sml( int memory[] );//the processor

int main( void ){
    
   int memory[ LIMIT ] = { 0 };

   intro();
   instruct( memory );
   sml( memory );
   
   //system("pause");
   return 0;
}

void intro( void ){
   printf("                         *** Welcome to Simpletron! ***\n"
          "***********************************************************************************\n"
          "*** Please enter your program one instruction *** INSTRUCTION                   ***\n"
          "*** (or data word) at a time.                 ***   READ       10    HALT 43    ***\n"
          "***                                           ***   WRITE      11               ***\n"
          "*** I will type the location number and a     ***   LOAD       20               ***\n"
          "*** question mark (?).                        ***   STORE      21               ***\n"
          "***                                           ***   ADD        30               ***\n"
          "*** You then type the word for that location. ***   SUBSTRACT  31               ***\n"
          "***                                           ***   DIVIDE     32               ***\n"
          "*** Type the sentinel -99999 to stop entering ***   MULTIPLY   33               ***\n"
          "*** your program.                             ***   BRANCH     40               ***\n"
          "***                                           ***   BRANCHNEG  41               ***\n"
          "*** @aeriqusyairi                             ***   BRANCHZERO 42               ***\n"
          "***********************************************************************************\n\n");   
}

void instruct( int memory[] ){
   int i = 0, j = 0;
   
   while(j != SENTINEL && i <= LIMIT){
           
      if(i == LIMIT){
         printf("Memory Full!\n");
         break;     
      }
      
     do{
      
         if(i < 10)
            printf("-> 0%d ? ", i );
         else
            printf("-> %d ? ", i );
      
         scanf("%d", &j ); 
         
         if((j < -9999 || j > 9999) && j != SENTINEL)
            printf("\a-> ERROR: INVALID INPUT!\n");
         
      }while((j < -9999 || j > 9999) && j != SENTINEL);
      
      if(j != SENTINEL){
         memory[ i ] = j;     
      }
      
      i++;       
   }
   
   printf("\n*** Program loading completed ***\n"
          "*** Program execution begins. ***\n\n");
}

void sml( int memory[] ){
   void dump( int memory[], int accumulator, int instructionCounter, int instructionRegister,
              int operationCode, int operand );//dump the server data
   
   int accumulator = 0;
   int instructionCounter = 0;
   int instructionRegister = 0;
   int operationCode = 0;
   int operand = 0; 
   
   while(instructionCounter < LIMIT){
      
      //fetch the data
      instructionRegister = memory[ instructionCounter ];
      operationCode = instructionRegister / 100;
      operand = instructionRegister % 100;
      //printf("%d\n%d\n%d\n", instructionRegister, operationCode, operand );
      
      switch(operationCode){
         
         case READ: printf("READ: ");
                    scanf("%d", &memory[ operand ] );
            break;
         
         case WRITE: printf("WRITE: ");
                     printf("%d", memory[ operand ] );
            break;
         
         case LOAD: printf("LOAD: %d\n", memory[ operand ] );
                    accumulator = memory[ operand ];
            break;
         
         case STORE: printf("STORE: %d\n", accumulator);
                     memory[ operand ] = accumulator;
            break;
         
         case ADD: printf("ADD: %d\n", memory[ operand ] );
                   accumulator += memory[ operand ]; 
            break;
         
         case SUBTRACT: printf("SUBTRACT: %d\n", memory[ operand ] );
                        accumulator -= memory[ operand ];
            break;
         
         case DIVIDE: printf("DIVIDE: %d\n", memory[ operand ] );
                      if(memory[ operand ] == 0){
                         printf("\a*** FATAL ERROR: Attempt to divide by zero ***\n");
                         operationCode = TERMINATED;
                      }else{
                         accumulator /= memory[ operand ];
                      }
            break;
         
         case MULTIPLY: printf("MULTIPLY: %d\n", memory[ operand ] );
                        accumulator *= memory[ operand ];
            break;
         
         case BRANCH: printf("BRANCH TO %d\n", operand - 1);
                      instructionCounter = operand - 1;
            break;
         
         case BRANCHNEG: printf("BRANCHNEG TO %d\n", operand - 1);
                         if(accumulator < 0)
                            instructionCounter = operand - 1;
            break;
            
         case BRANCHZERO: printf("BRANCHZERO TO %d\n", operand - 1);
                          if(accumulator == 0)
                             instructionCounter = operand - 1;
            break; 
            
         default: if(operationCode != HALT){
                     printf("\a*** FATAL ERROR: Attempt to execute invalid operation ***\n");
                     operationCode = TERMINATED;
                  }                   
         
      }
      
      if(accumulator > 9999 || accumulator < -9999){
         printf("\a*** FATAL ERROR: accumulator overflows ***\n");
         operationCode = TERMINATED;              
      }
      
      if(operationCode == HALT){
         printf("\n\n*** Simpletron execution terminated ***\n");
         break;
      }else if(operationCode == TERMINATED){
         printf("*** Simpletron execution abnormally terminated ***\n");
         dump( memory, accumulator, instructionCounter, instructionRegister, operationCode, operand );
         break;   
      }
      
      instructionCounter++;
      
   }    
}

void dump( int memory[], int accumulator, int instructionCounter, int instructionRegister,
           int operationCode, int operand ){
   
   int i, j;
   
   printf("\nREGISTERS:\n"
          "accumulator            +%d\n"
          "instructionCounter      %d\n"
          "instructionRegister    +%d\n"
          "operationCode           %d\n"
          "operand                 %d\n\n"
          "MEMORY:\n  ", 
          accumulator, instructionCounter, instructionRegister, operationCode, operand);
   for(i = 0; i < 10; i++){
      printf("%7d", i );
   }
   printf("\n");
   for(i = 0; i < LIMIT; i += 10){
      
      if(i == 0)
         printf("%d ", i);
      else
         printf("%d", i);
         
      for(j = i; j < i + 10; j++ ){
         if(memory[ j ] == 0)
            printf("  +0000");
         else
            printf("  %+d", memory[ j ]);
      }
      printf("\n");
   }   
}
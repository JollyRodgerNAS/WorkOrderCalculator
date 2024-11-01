This project receives input from a file that contains work orders(name - number(amount of work orders)). 
It then takes that input, adds up the work orders for entries of the same name, sorts from largest amount of work orders to least using qsort, and then outputs that information to a separate file.
For example:
If input is:  Mike - 5
              Jim - 3
              Tom - 7
              Angelus - 6
              Daedalus - 9
              Mike - 7
              Jim - 0
              Tom - 5
              Angelus - 9
              Daedalus - 10
              Spongebob - 8
              Patrick - 9 
              
output is:    Daedalus - 19
              Angelus - 15
              Tom - 12
              Mike - 12
              Patrick - 9
              Spongebob - 8
              Jim - 3

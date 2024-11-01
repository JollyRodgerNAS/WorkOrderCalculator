This project receives input from a file that contains work orders(name - number(amount of work orders)).<br />
It then takes that input, adds up the work orders for entries of the same name, sorts from largest amount of work orders to least using qsort, and then outputs that information to a separate file.<br />
For example:<br />
If input is:<br />
              &emsp;&emsp;&emsp;Mike - 5<br />
              &emsp;&emsp;&emsp;Jim - 3<br />
              &emsp;&emsp;&emsp;Tom - 7<br />
              &emsp;&emsp;&emsp;Angelus - 6<br />
              &emsp;&emsp;&emsp;Daedalus - 9<br />
              &emsp;&emsp;&emsp;Mike - 7<br />
              &emsp;&emsp;&emsp;Jim - 0<br />
              &emsp;&emsp;&emsp;Tom - 5<br />
              &emsp;&emsp;&emsp;Angelus - 9<br />
              &emsp;&emsp;&emsp;Daedalus - 10<br />
              &emsp;&emsp;&emsp;Spongebob - 8<br />
              &emsp;&emsp;&emsp;Patrick - 9<br />
              
output is:<br />
              &emsp;&emsp;&emsp;Daedalus - 19<br />
              &emsp;&emsp;&emsp;Angelus - 15<br />
              &emsp;&emsp;&emsp;Tom - 12<br />
              &emsp;&emsp;&emsp;Mike - 12<br />
              &emsp;&emsp;&emsp;Patrick - 9<br />
              &emsp;&emsp;&emsp;Spongebob - 8<br />
              &emsp;&emsp;&emsp;Jim - 3<br />

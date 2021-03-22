# Lab 5 Exercise
## Own Device Driver  
![Click here](./ex5/ex5.c) to view the kernel code.  
### Output
  
Compiling the kernel code using make cmd.  
![1](./ex5/ex5ss/1.png)  
![Click here](./ex5/Makefile) to view the makefile.  
  
After inserting the module using **insmod ex5.ko** and checking whether inserted or not using **lsmod | less** command.  
![2](./ex5/ex5ss/2.png)  
We can see that the ex5 module is present in the list.  
  
Running **dmesg | tail -1** command to check if the entry part module is executed.  
![3](./ex5/ex5ss/3.png)  
  
Removing the module using **rmmod ex5.ko** and running **dmesg | tail -1** command to check if the exit part module is executed.    
![4](./ex5/ex5ss/4.png)  
  
Checking if the module is removed using **lsmod | less** command.    
![5](./ex5/ex5ss/5.png)  
We can see that the ex5 module is removed from the list.  

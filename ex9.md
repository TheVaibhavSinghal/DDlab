# Lab 9 Exercise
## Keyboard Logger  
![Click here](./ex9/keylogger.c) to view the kernel code.  
### Output

Compiling the kernel code using make cmd.  
![1](./ex9/ex9ss/1.png)  
![Click here](./ex9/Makefile) to view the makefile.  

After inserting the module using **insmod keylogger.ko** and checking whether inserted or not using **lsmod | less** command.  
![2](./ex9/ex9ss/2.png)  
We can see that the keylogger module is present in the list.  

Entering the email id and password in the login form  
![3](./ex9/ex9ss/3.png)  

Running **dmesg** command to check if the keystrokes are recorded.  
![4](./ex9/ex9ss/4.png)  
We can clearly see that the email id and password is recorded.

Removing the module using **rmmod keylogger.ko** and running **dmesg** command to check if the exit part module is executed.    
![5](./ex9/ex9ss/5.png)  

Checking if the module is removed using **lsmod | less** command.    
![6](./ex9/ex9ss/6.png)  
We can see that the keylogger module is removed from the list.  

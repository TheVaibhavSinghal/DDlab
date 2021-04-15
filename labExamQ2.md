# Lab Exam Question 2

## 2a) Write a module that can take an integer parameter when it is loaded with insmod command.
![Click here](./labExamQ2/2a/2a.c) to view the kernel code.  
### Output

Compiling the kernel code using make cmd.  
![1](./labExamQ2/2a/2ass/1.png)  
![Click here](./labExamQ2/2a/Makefile) to view the makefile.  

Inserting the module using **insmod 2a.ko count=20**
![2](./labExamQ2/2a/2ass/2.png)  

Checking whether inserted or not using **lsmod | less** command.  
![3](./labExamQ2/2a/2ass/3.png)  
We can see that the 2a module is present in the list.  

Running **dmesg | tail -1** command to check if the entry part module is executed.  
![4](./labExamQ2/2a/2ass/4.png)  

Removing the module using **rmmod 2a.ko** and running **dmesg | tail -1** command to check if the exit part module is executed.    
![5](./labExamQ2/2a/2ass/5.png)  

Checking if the module is removed using **lsmod | less** command.    
![6](./labExamQ2/2a/2ass/6.png)  
We can see that the 2a module is removed from the list.  

## 2b) Write a module which prints your name in log.
![Click here](./labExamQ2/2b/2b.c) to view the kernel code.  
### Output

Compiling the kernel code using make cmd.  
![1](./labExamQ2/2b/2bss/1.png)  
![Click here](./labExamQ2/2b/Makefile) to view the makefile.  

After inserting the module using **insmod 2b.ko** and checking whether inserted or not using **lsmod | less** command.  
![2](./labExamQ2/2b/2bss/2.png)  
We can see that the 2b module is present in the list.  

Running **dmesg | tail -1** command to check if the entry part module is executed.  
![3](./labExamQ2/2b/2bss/3.png)  

Removing the module using **rmmod 2b.ko** and running **dmesg | tail -1** command to check if the exit part module is executed.    
![4](./labExamQ2/2b/2bss/4.png)  

Checking if the module is removed using **lsmod | less** command.    
![5](./labExamQ2/2b/2bss/5.png)  
We can see that the 2b module is removed from the list.  

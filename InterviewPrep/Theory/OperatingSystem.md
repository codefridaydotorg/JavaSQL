# Operating Systems

1. What is a Microprocessor?

**Ans.** A microprocessor is a programmable device that takes in input perform some arithmetic and logical operation over it and produce the desired output. A digital device on a chip which can fetch instructions from memory, decode and execute them to give results.

![Structure_Of_Microprocessor][microprocessor-structure]


2. How does a compiler compiles the interlinked libraries?

**Ans.** When a C program is compiled the compiler generates object code. After generating the object code, the compiler also invokes the linker. The main task of linker is to generate the functions of linker is to make the code of library functions available to the program.

**Static Linking:** Copying the code of library function to your object code.
**Dynamic Linking:**Make arrangements so that the entire code is not copied but is available at the run-time.

3. Explain the implementation of Virtual Method?

**Ans.** When a member function which is declared within a Base Class is redefined by a Derived Class, when you refer to a derived class object using a pointer of base class, you can call the virtual function of that class.

```
int main()
{
    base* bptr;
    derived d;
    bptr = &d;

    // virtual function, binded at runtime
    bptr->print();

    // Non-virtual function, binded at compile time
    bptr->show();
}
```

**The virtual method is dependent on the pointer used to initialise it's object**

4. Explain implementation of Dynamic Binding?

**Ans.** Compiler doesn't decide the method to be called as pointers are involved. Method overriding is the perfect example of the Dynamic Binding.

```
public static void main(String[] args)
{
    superclass A = new superclass();
    superclass B = new subclass();
    A.print();  //print in superclass
    B.print();  //print in subclass
}
```

5. Explain Virtual Table or vTable?

**Ans.** The idea is that the virtual function are called according to the type of object instance referenced to and not according to the type of reference. Thus they are resolved in the runtime. Thus the compiler would need two things to perform runtime resolution.

**1. vtable:** Short for Virtual Function Table, it is a lookup table for functions used to resolve function calls in a dynamic binding manner. The compiler creates a static table per class and the data consists of pointers to the virtual function definition. They are automatically initialized by the compilers constructor table. Since virtual function pointers are stored in each instance the compiler enables call to correct virtual function.

**2. vptr:** A pointer to vtable, mantained per object instance.

6. Explain the concept of MultiThreading?

**Ans.** The concept of MultiThreading needs understanding of Two Terms:
1. Process: A program being executed, which can be divided into independent units called threads.
2. Thread:  A small light weight process within a process.

7. Process vs Thread?

**Ans.** 

|Sno|Process|Thread|
|:---|:---|:---|
|1. |Any program in execution|Segment of a process|
|2. |Takes more time to terminate|Takes less time to terminate|
|3. |Takes more time for creation|Takes less time for creation|
|4. |Takes more time for context switching|Takes less time for context switching|
|5. |Less efficient communication|More efficient communication|
|6. |Consumes more resources|Consumes less resources|
|7. |Isolated|Shared Memory|

8. What is FCFS Scheduling?

**Ans.** First in First Out is also called First Come First Serve(FCFS), it is the simplest form of scheduling algorithm. It simply queues the processes in the order that they may arrive in the ready queue.

9. Explain Shortest Job First(SJF) Scheduling?

**Ans.** A policy that selects the waiting process with the smallest execution time to execute next. It is a Non-Preempetive Algorithm.
    1. Has the advantage for having the minimum average waiting time.
    2. Called Greedy Algorithm.
    3. May cause starvation if a shorter Task keeps showing up.
    4. Practicaly Infeasible as the OS cannot know the Burst Time.

*Burst Time: The amount of time required by a process for executing on CPU.*

*Non-Preempetive Algorithm are Designed such that once a process enters the running state it cannot be preempted until it completes it's allotted time, whereas Preemptive Algorithms may be preempted by the a scheduler when a higher priority process enters.*

```
Completion Time:    Time at which the process completes it's Execution.
Turn Around Time:   Completion Time-Arrival Time.
Wait Time:          Turn Around Time-Burst Time.
```

10. Explain Shortest Remaining Time First Algorithm?

**Ans.** The process with the smallest remaining time will execute first. Since the currently running Process is the shortest amount of time remaining by definition and it will only reduce over time, the process will always run until complete or a new process of shorter time arises.

11. Explain Longest Remaining Time First Algorithm?

**Ans.** This is a pre-emptive version of Longest ob First. The process with the longest remaining time will execute first.

12. Explain Priority CPU Scheduling?

**Ans.** One of the most common scheduling algorithm in the batch system. Each process is assigned priority. The process with the highest priority will be executed first. Priority can be defined on many basis like First Come First Serve, Memory Requirement, etc.

13. Explain Round Robin?

**Ans.** Scheduling Technique where each process is assigned a fixed time slot in a cyclic way. Simple and easy and ensures starvation free environment. Disadvantage is that it has a high cost overhead.

14. Explain Semaphore?

**Ans.** Proposed by Djikstra to manage the concurrent processes by using a simple integer value called Semaphore. It is simply a non-negative variable shared between threads. It is used to solve the critical section problem and to acheive process synchronization in the Multiprocessing Environment.

They are of 2 Types:
    1. Binary Semaphore:    Also called Mutex Lock with value between 0 and 1. It is initialized to 1.
    2. Counting Semaphore:  Value can range unrestrictively. It is used to control access to a resource that has multiple instances.

15. What is a Mutex?

**Ans.** A lock that we set before using a resource and release it after using it. When the lock is set no other thread can access this resource. This ensure synchronized access of shared resources in the code.

16. Mutex vs Semaphore?

**Ans.** Mutex is mutual exclusion object that synchronizes access to a resource while Semaphore is a signalling mechanism.

17. Explain Producer Consumer Problem.

**Ans.** Also called the Bound-Buffer Problem, it is a classic example of a multi-process synchronization problem. The problem describes two processes the consumer and the producer, which share a common fixed size buffer used as a queue.

    1. The producer's job is top create data and put it into the buffer.
    2. The consumer's job is to consume data one piece at a time.

*Problem: Make sure that the producer won't try to add data into the buffer if it's full and consumer won't try to consume data if the buffer is empty.*

*Solution: The producer goes to sleep when the buffer is full and the consumer notifies the producer after consuming data, In the same way the Consumer has to go to sleep if it finds the buffer to be empty and the producer notifies the consumer when he add data to the buffer.*

18. Explain Deadlock.

**Ans.** A situation where a set of processes are blocked beacause each process is holding a resource and waiting for another resource acquired by some other process. 

Condition:
    1. Mutual Exclusion:    One or More than one resource is non-sharable.
    2. Hold and Wait:       A process is holding at least one resource and waiting for resources.
    3. No Preemption:       A resource cannot be taken from a process unless the process is releases it.
    4. Circular Wait:       A set of processes are waiting for each-other.

19. What is Critical Section?

**Ans.** When more than one process accesses the same code segment, it is known as the critical section. It contains shared variables or resources which are needed to be synchronized to mantain consistency of data variables.

20. Explain Banker's Algorithm.

**Ans.** A resource allocation and deadlock avoidance algorithm that tests for safety by simulating the allocation for predetermined maximum possible amount of all possible amount of all resources, then make an "state" test for all possible activities, before deciding whether allocation should be allowed to continue.

The OS has to be informed what processes are coming and what resources they may require and what resources are already allocated to them.

21. Explain Spin Lock.

**Ans.** A spinlock is a lock which causes a thread trying to acquire it to simply wait in a loop while repeatedly checking if the lock is available, since the thread remains active but not performing a task, the use of such lock is a kind of busy waiting. Not appropriate for a single processor system

22. What is Cache?

**Ans.** Cache is a special very high speed memory. It is used to speed up and synchronize with the high speed CPU. It is costlier than main memory but economical than CPU registers. It acts as a buffer between RAM and the CPU. It holds frequently requested data and instructions so that they are immediately available.

23. What is Demand Paging?

**Ans.** The process of loading the page into memory on demand is known as demand paging.

24. Explain Thrashing.

**Ans.** Thrashing is a codition when the system is spending a major portion of its time in servicing the page faults but the actual processing done is very negligible.

<!--Image-->

[microprocessor-structure]: ./Images/microprocessor_structure.png

25. What is Segmentation?

**Ans.** A process is divided into segments. The chunks that a program is divided into which are not necessarily all of the same sizes are called segments. Segments gives user's view of the process which does not give.

There are two types of Segments:

1. Virtual Memory Segmentation
2. Simpe Segmentation

26. How will one analyze out of memory exception?

**Ans.** In java all objects are stored in the Heap. They are allocated using the new operator. Usually this error is thrown when the JVM cannot allocate an object because it is out of memory and no memory can be made available by the garbage collector.

Out Of Memory Error: It means one is holding onto objects for too long or are trying to process too much data at the same time.

27. Explain Internal and External Fragmentation.

**Ans.** 

**Internal Fragmentation:** Happens when the memory is split into mounted sized blocks, whenever a method requests for memory, the mounted sized block is allocated. In case there is a difference in the request and alloted size(alloted size is greater) the distinction is called Internal Fragmentation.

**External Fragmentation:** When there is sufficient quantity of area within the memory however the request cannot be specified because the available memory is non-contiguous.

28. Difference Between Associative Mapping and Direct Mapping in a cache

**Ans.** 

**Direct Mapping :** The simplest technique known as direct mapping, maps each block of the main memory into a single cache line. We assign each memory block to a specificline in the cache. If a line is previously taken up by a memory block then a new memory block has to be loaded, the old memory block is trashed. The address field is built in two parts index field and a tag field. The cache is used to store the tag field whereas the rest is stored inside main memory. Direct mapping's performance is directly proprtional to the Hit ratio.

**Asspciative Mapping :** In this type of mapping, the associative memory is used to store the content and address of the memory word. Any block can go into any line of the cache. This means that the word id bits are used to identify which word in the block is needed, but the tag becomes all of the remaining bits.

29. What is Paging?

**Ans.** Paging is a memory management scheme that eliminates the need for contiguous memory allocation of physical memory. This scheme permits the physical address space of a process to be non-contiguous.

Mapping form virtual to physical address is done by the memory management unit(MMU) which is a hardware device.

30. What is a Page table?

**Ans.** Has page table entries where each page table entry stores a frame number and optional status bit. Many of status bits used in the virtual memory system. The most important is Frame Number.

    1. Frame Number : It gives the frame number in which the current page you are looking for is present.
    2. Present/Absent Bit: Tells if the Page we are looking for is present or not.
    3. Protection Bit: Tells about the type of protection one wants on a page.
    4. Referenced Bit: Tells if the page is referenced in the last clock cycle or not.
    5. Cache Disabled: 
    6. Modified Bit:
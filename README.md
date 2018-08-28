## Exercise: HelloWorld (25 Points)

The objective of this project is to familiarize yourself with 
CLion, the Integrated Development Environment (IDE) we use for 
this class, and the workflow using Git and GitHub.

The first thing you will need to do is fork and clone this assignment
from GitHub. Follow the instructions 
[here](https://github.com/vcc-csv13-fall2018/HowToStartEveryProject)
to get started. 

Be sure that you fork the project first and use the URL from
the forked project when you clone it in CLion.

### Writing the code for this Project

Writing the code for this project is very simple. Since the 
objective of this assignment is understanding the workflow, 
the code is given to you. Simply create the one file below 
`main.cc` in CLion
and then copy the content into the files. 

#### main.cc

In CLion in the project explorer, right-click the `src` directory
and chose `New => C++ Source File`. 

![Adding source file](https://github.com/sbcc-cs140-fall2018/Course-Information/wiki/images/03_new_source_file.png)

Under **Name** fill in
helloworld. CLion will add the extension, but by default 
adds the `.cpp` extension. All projects in this class will
use the `.cc` extension. Select `.cc` in the **Type** drop-down
and press **OK**. You should now see the file `main.cc` in
the project explorer in the `src` directory.

Copy and paste the following code into this file over any
contents that may already be in the `main.cc` file.

```cpp
/**
 * CS V13 Object-Oriented Programming
 * CRN: [CHANGE THIS INFORMATION]
 * Assignment: EX01-HelloWorld
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author [CHANGE THIS INFORMATION]
 */
 
#include <iostream>
#include <csv13>

int main(UNUSED(int argc), UNUSED(char *argv[])) {
    std::cout << "Hello, World!" << std::endl;
    return EXIT_SUCCESS;
}
```
### Running the code for this project

Running this code should be straightforward. In the drop-down 
menu in the upper right-hand corner you should see a *Run
Configuration* called `Helloworld | Debug`. Make sure this 
configuration is selected and press the play button next to it.
In the **Run** view below the code you should see the output 
of running the program. It should look something like this:

```bash
/Users/username/githubusername/ex01-helloworld/cmake-build-debug/bin/HelloWorld
Hello, World!

Process finished with exit code 0
```
Success! Now you can move on to testing your code.

### Testing the code for this project

Testing the code for this project is similar to running your code
as outlined above. In the drop-down menu in the upper right-hand
corner select the configuration `HelloWorld_Gtest` and press the 
play button next to it. In the **Run** view below the code you should
see the output of running these tests. It should look something
like this:

```bash
Running main() from gtest_main.cc
[==========] Running 1 test from 1 test case.
[----------] Global test environment set-up.
[----------] 1 test from HelloWorldTest
[ RUN      ] HelloWorldTest.Positive
[       OK ] HelloWorldTest.Positive (2 ms)

Your unit test score is 20 out of 20
The assignment is worth a total of 25 where the remainder of 5 points
comes from grading related to documentation, algorithms, and other
criteria.

[----------] 1 test from HelloWorldTest (2 ms total)

[----------] Global test environment tear-down
[==========] 1 test from 1 test case ran. (2 ms total)
[  PASSED  ] 1 test.

Process finished with exit code 0
```

Remember, red good, green bad. If your tests pass you should see green
text and your code ran fine. You should also see your score for this
assignment minus code styling points which I will add later.

### Submitting the code for this project

At the bottom of CLion there should be a view tab labeled **Version Control**.
Select this tab at the bottom of the screen. You should see a tab called **Local Changes**.
Under **Unversion Files** you should have one file: `main.cc`.
Select these files and right-click on them. In the drop-down menu
select **Add to VCS**. Next, right-click on these files again, which should
now be under **Default** and select **Commit**. Add the appropriate
commit message and click **OK**. Finally, right click on the committed files,
select `Git -> Repository -> Push...`. Follow the onscreen directions
and press **OK**. This step will run the tests again, check that everything is OK
and then submit them to the cloud to have the tests run for grading.

If you do not understand these directions, or wish to do them on the command
line rather than in CLion, then read these [directions](https://github.com/vcc-csv13-fall2018/Course-Information/wiki/How-to-Turn-In-Every-Project).

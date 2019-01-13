## Exercise: HelloWorld (25 Points)

The objective of this project is to familiarize yourself with 
CLion, the Integrated Development Environment (IDE) we use for 
this class, and the workflow using Git and GitHub.

The first thing you will need to do is accept the invitation to this assignment
from GitHub Classroom. You can click [here](https://classroom.github.com/a/Qxkh__cV) to accept the invitatiion, and then
follow the instructions [here](https://github.com/vc-csv13-spring2019/Course-Information/wiki)
to get started. 

Be sure that you accept the invitation first and use the URL from
the your new project when you clone it in CLion.

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
 * Assignment: EX01-HelloWorld
 *
 * Statement of code ownership: I hereby state that I have written all of this
 * code and I have not copied this code from any other person or source.
 *
 * @author [CHANGE THIS INFORMATION]
 */
 
#include <iostream>
#include <csv13>

int main(int argc, char *argv[]) {
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

### Submitting the code for this project

Before submitting your code the first time, you will need to add a webhook to this project to trigger the build in the cloud. This process is simple, and only required once per assignment. First, go to the **Settings** tab at the top of this page. It's right next to **Insights**. Then along the left side select **Webhooks**. On the Webhooks page click **Add Webhook** and copy http://209.129.49.16:8080/github-webhook/ into the **Payload URL** input box and then click **Add Webhook**. That's it. Every time you push code now, a new build will test your latest changes. The results are pasted to the #build channel in slack.

First, right click on the project name, then select `Git -> Commit Directory...`. 
Make sure only the files you want to push are selected, `main.cc`. Then uncheck `Perform code analysis` and `Check TODO`. It's OK to leave them checked, but committing will take longer. Leave `Run git hooks` unchecked as well. Put a message in `Commit Message` and then press the **Commit** button. If anything goes wrong check the _Version Control_ view
in the lower left corner and select the _Console_ tab.
 
Finally, right click on the project name, then select `Git -> Repository -> Push...`. Follow the onscreen directions
and press **OK**. This step will then submit them to the cloud to have the tests run for grading.

If you do not understand these directions, or wish to do them on the command
line rather than in CLion, then read these [directions](https://github.com/vc-csv13-spring2019/Course-Information/wiki/How-to-Turn-In-Every-Project).

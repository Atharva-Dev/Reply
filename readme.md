# Reply #
Hello ....
This is my first project

Here is how it works:<br><br>
        1. You type a string<br>
        2. Program will compare every word in line of questions file to given string 
           and find line whose every word is in your string.<br>
        3. Then, It will show you the line in answers file whose line number is same as 
           line of line in question file.<br>
        4. eg. You entered "what is your name", Program will find line which reads "what your name"(keywords only),
           then it will show string in answers which has same line number as string "what your name" in questions file<br><br>           
        If no match is found, your question will be added to notfound file, which will be generated if not available
        Then you have to manually add (append in new line) keywords for the question in questions and answer in answers
        Then, you have to run Sort_QA
 
        
**Purpose of Sort_QA:**<br>
        the keyword for questions "what are you" and "what are you doing" were "what are you" and "what are you doing".
        so, when I tried typing "what are you doing", it was giving me answer for "what are you" because without sorting,
        the first match for the question was "what are you". so, to sort the questions in Decending order of number of
        words, Sort_QA is made.
       
       
**IMPORTANT NOTE :**<br>
        If you are using Linux-based operating system, Uncomment the part in main of reply.cpp which says "Linux"<br><br>
                Once you done it, There is no need to run Sort_QA.
        The reply will itself execute Sort_QA.
        

         
              

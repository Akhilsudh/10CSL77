<img src="http://image3.mouthshut.com/images/imagesp/925718051s.png"  width="120" height="100"/>

## Networks Laboratory (VTU 10CSL77)

### List of Experiments for Simulation using NCTuns :  
1.  [Simulate  a  three  nodes  point  –  to  –  point  network  with  duplex  links between  them.  Set  the  queue  size  and  vary  the  bandwidth  and  find  the number of packets dropped. ](https://www.youtube.com/watch?v=ShEC73xOnZ0)  
[![Simulation 1](https://img.youtube.com/vi/ShEC73xOnZ0/0.jpg)](http://www.youtube.com/watch?v=ShEC73xOnZ0)  

2.  [Simulate  a  four  node  point-to-point  network  with  the  links  connected  as follows: n0 – n2, n1 – n2 and n2 – n3. Apply TCP agent between n0-n3 and UDP between  n1-n3.  Apply  relevant  applications  over  TCP  and  UDP  agents changing  the  parameter  and  determine  the  number  of packets  sent  by TCP / UDP. ](https://www.youtube.com/watch?v=zO3Pv9TRLW0&t=2s)   
[![Simulation 2](https://img.youtube.com/vi/zO3Pv9TRLW0/0.jpg)](http://www.youtube.com/watch?v=zO3Pv9TRLW0)  

3. [Simulate  the  transmission  of  ping  messages  over  a  network  topology consisting  of  6  nodes  and  find  the  number  of  packets  dropped  due  to congestion. ](https://www.youtube.com/watch?v=yfo5OPVkTxI)
[![Simulation 3](https://img.youtube.com/vi/yfo5OPVkTxI/0.jpg)](http://www.youtube.com/watch?v=yfo5OPVkTxI)  

4.  [Simulate  an  Ethernet  LAN  using  n  nodes  (6-10),  change  error  rate  and data rate and compare throughput. ](https://www.youtube.com/watch?v=LHFwh1k2r0M)
[![Simulation 4](https://img.youtube.com/vi/LHFwh1k2r0M/0.jpg)](http://www.youtube.com/watch?v=LHFwh1k2r0M)

5. [Simulate  an  Ethernet  LAN  using  n  nodes  and  set  multiple  traffic  nodes and plot congestion window for different source / destination. ](https://www.youtube.com/watch?v=U8XgAIo0kT8)
[![Simulation 5](https://img.youtube.com/vi/U8XgAIo0kT8/0.jpg)](http://www.youtube.com/watch?v=U8XgAIo0kT8)    

6.  [Simulate  simple  ESS  and  with  transmitting  nodes  in wire-less  LAN  by simulation and determine the performance with respect to transmission of packets. ](https://www.youtube.com/watch?v=119C9JHnpBU)
[![Simulation 6](https://img.youtube.com/vi/119C9JHnpBU/0.jpg)](http://www.youtube.com/watch?v=119C9JHnpBU)

### Implement the Following in C/C++ :

7.  [Write a program for error detecting code using CRC - CCITT (16- bits).  ](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/07/7.c)

8.  [Write a program for distance vector algorithm to find suitable path for transmission. ](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/08/8.c)

9.  Using TCP/IP sockets, write a client – server program to make the client send the file name and to make the server send back the contents of the requested file if present.
* [server code](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/09/server.c)
* [client code](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/09/client.c)

10. Implement the above program using as message queues or FIFOs as IPC channels.
* [server code](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/10/server.c)
* [client code](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/10/client.c)

11. [Write a program for simple RSA algorithm to encrypt and decrypt the data. ](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/11/11.c)

12. [Write a yacc program that accepts a regular expression as input and produce its parse tree as output. ](https://raw.githubusercontent.com/Akhilsudh/10CSL77/master/12/12.c)

### Compiling/Running the code
For Network Simulation in Fedora 8 :

	cd /usr/local/nctuns/bin
	./dispatcher   #In Tab 1
	./coordinator  #In Tab 2
	./nctunsclient #In Tab 3
For C programs :

    gcc -o file file.c
    ./file


###LICENSE
	MIT License

	Copyright (c) 2017 Akhil Sudhakaran

	Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.



Credit also goes to :

* Mohit Sehrawat for the youTube simulation videos.  
* my class mate Vidhya for the Programs.

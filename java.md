# Basic Java

Learning Material

[link](https://www.youtube.com/watch?v=xk4_1vDrzzo)

[link](https://www.runoob.com/java/java-collections.html)

[link](https://juejin.cn/post/6844903922700648456)

[命令行编译Java项目](https://blog.csdn.net/chen930724/article/details/49432051)

   1. javac -d bin/ -cp lib/*.jar src/firstproject/Main.java

     -d 表示编译后.class文件存放位置
    
     -cp 表示编译依赖的环境（jar包），多个包可以用冒号隔开

   2. java -cp bin/ firstproject.Main

     -cp表示执行以来环境，一定要把编译时的路径加上（bin/）
    
     firstproject.Main要加上包和主文件名

[link](https://www.liaoxuefeng.com/wiki/1252599548343744/1304048154181666)



Jvm相关（没有学）

[link](https://zhuanlan.zhihu.com/p/44694290)

[link](https://blog.csdn.net/weixin_43767015/article/details/105453983)

Java书籍（没有下载，没有学）

[link](https://www.w3cschool.cn/java/java-book.html)

[一个Java博客](https://www.cnblogs.com/aishangJava/tag/)

[java培训](https://wiki.jikexueyuan.com/list/java/)

[重要 没学](https://wiki.jikexueyuan.com/list/java/)

[泥瓦匠 没看](https://www.bysocket.com/2022-02-26/%e5%89%91%e6%8c%87%e5%a4%a7%e5%8e%82%ef%bc%9a%e5%b0%8f%e7%99%bd%e5%85%a5%e8%81%8c%e5%a4%a7%e5%8e%82%e5%ae%8c%e5%85%a8%e6%94%bb%e7%95%a5%ef%bc%8c%e5%be%88%e8%82%9d.html)

[没看](https://juejin.cn/post/6844903560719646728)

## Basic concept（Java高级编程语言语法）

1. source code (.java) compiled to byte code (.class),  by JVM to machine code

2. JDK: java development kit > JRE: java runtime environment > JVM: java virtual machine

3. IDE: integrated development environment

4. Java实现一次编译，到处运行，是基于把编译和运行分开的结果。Java编译器负责把Java编译成字节码，编译成字节码可以对这个字节码进行优化，这个字节码可以发送到不同平台上被JVM（Java虚拟机进行运行）加载运行（字节码不跟平台相关），JVM还集成了一些比如垃圾回收机制等特性，JVM是平台相关的，针对不同类型的机器单独编写了JVM。C++等语言编译和执行是一起的，C++编译器把代码直接编译成平台相关的机器码，点击这个机器码得到执行，C++编译器可以将机器码进行优化。Python发送的是源码，编译和执行是一起的，一句一句的，没有代码优化的方法。

   Java EE是Java企业版，实在Java SE标准版上添加了分布式处理、网页处理、数据库请求、消息服务这些特性的，Java SE和Java EE的JVM通用。Java ME是Java SE的瘦身版，是用于嵌入式编程的语言，Java ME的JVM和Java SE不通用，Java SE程序不能在Java ME上运行。Java ME没能在移动应用上火起来，而是Android代替了他。

   想学习Java语法、核心开发技术和标准库，学习Java SE

   想学习Web 开发、Spring框架、数据库开发、分布式架构，学习EE

   想学习大数据开发，学习Had、Spark、Flink

   想学习移动开发，学习Android

   

   JDK：Java开发套件，在JRE开发编译器和调试器等

   JRE：Java运行环境，在JVM上开发运行库

   JVM：Java虚拟机，负责加载执行

   

   JSR：Java SPecification Request，Java语言规范，定义了接口等规范

   JCP：Java Community Process

   RI： Reference Implementation，参考实现，定义了一个接口，他的实现的参考，这个RI不讲究效率但是要保证正确性

   TCK：Technology Compatibility Kit，兼容性测试套件，提供接口和功能描述，方便开发者理解

   发布JSR也就是要发布RI和TCK

    

4. 参数传递：

   传值：对于基本数据类型，直接传值；对于类类型和集合类以及String类，等，传递实例的引用

4. 重载和重写：

   重载：方法名相同，但是参数或者返回不同

   重写：类继承时子类重写父类的同名函数

7. JAVA特性

   1. 跨平台性：Java程序(.java)被编译成字节码(.class)，通过JVM解释运行。Java通过JVM实现跨平台性，但是JVM不是跨平台的，不同操作系统具有不同的JVM。
   2. Java**语法**和C++相近，但是抛弃了C++的一些特性，比如操作符重载、多继承、强制类型转换，Java不使用指针，而是引用，Java提供自动内存分配和回收机制。
   3. JAVA支持**面向对象编程**。Java只支持类单继承，但是支持接口多继承。Java支持动态绑定，C++只对虚函数使用动态绑定
   4. JAVA提供**网络应用编程**几口（JAVA net），RMI远程激活方法可以用于开发分布式应用
   5. JAVA**健壮性**，强类型机制、异常处理、垃圾回收、安全检查
   6. JAVA**安全性**，在网络环境中，提供了一个安全机制防止恶意代码攻击
   7. JAVA**体系结构中立，可移植性**，JAVA代码被编译成字节码格式，这个格式可以在任意JVM上运行
   8. JAVA**高性能**，运行速度在JIT编译器技术的发展下接近C++
   9. JAVA**多线程**，支持多线程同步，有两种方法实现多线程，一种是Thread子类，一种是传递一个实现了Runnable接口的对象给Thread对象
   10. JAVA**动态性**，JAVA运行的类可以动态载入运行环境，也可以通过网络载入运行环境，方便软件升级

8. Java代码执行顺序：

   new 创建实例：静态代码块，非静态代码块，构造函数

   无new的顺序：静态代码块，方法，方法中的代码块

9. JAVA关键字和修饰符

   1. 访问控制修饰符：public，protected，private，default

   2. 类和变量修饰符：class，extends，implements，interface

      1. abstract： 用来创建抽象类和抽象方法，一个类不能同时被abstract和final修饰，抽象类的唯一目的就是对这个类进行扩充，抽象类可以包含抽象方法和非抽象方法。抽象方法是一个必须由子类实现的方法，抽象方法不能被final和static修饰。子类必须实现所有抽象方法，除非子类也是抽象类。抽象类可以不含抽象方法

         ```java
         public abstract sample() ;
         ```

         

      2. static：修饰的变量只在类的所有对象中一份拷贝，存储在静态内存空间，main函数必须用static休书，否则JAVA无法执行。静态方法可以用className.methodName方式引用。static方法不能被子类重写，但是能被子类重新声明

         static字段，创建一个全部实例共享的变量

         static方法，穿凿一个与实例无关的方法，static方法内部不能使用this关键字，只能访问static字段。

      3. final: final修饰的类不能被继承，final修饰的方法不能被子类重写（防止子类修改这个方法），final修饰的变量是常量。final修饰的变量必须显示给出初始值，通常public static final 用于声明常量。

         final的作用，阻止类被继承，阻止子类被复写，组织变量被重新赋值

         final类，类不能被继承

         final方法，方法不能被重写

         final变量，变量不能重新赋值

      4. static final合用，创造一个全局实例共享但是不能被改变的变量

      4. new，native，strictfp，

      5. transient： 序列化的对象含有被transient修饰的实例变量时，JVM会跳过这个变量，这个用来预处理类和数据变量的类型，不会持久化

      6. synchronized：修饰的方法同一时间只能被一个线程访问，synchronized可以加四个访问控制符

      7. volatile： volatile修饰的局部变量在每次线程调用时都会从共享内存读取这个变量的数值，在局部变量数据发生变化的时候线程会强制写道内存空间，这样在任何时刻，两个不同的线程总是看到成员变量的同一个值。

   3. 变量引用：

      1. super：父类
      2. this：本类

   4. 错误处理：

      1. assert：断言表达式是否为真
      2. try，catch，finally：捕获异常
      3. throw：抛出异常对象
      4. throws：声明一个异常可能被抛出

6. 面向对象编程

   1. 对象：一个类的实例，有状态和行为
   2. 类：一个模板，描述一类对象的行为和状态
   3. 方法：方法就是类的行为

11. Notes

    1. 接口：对象间相互通信的协议，接口只定义派生用到的方法，方法的实现决定于派生类。接口的访问控制符只能是public

    2. JAVA一个源文件只能有一个public类，可以有多个非public类。源文件名字和public类名字相同。如果源文件在包中，要把包名放到源文件首行。import语句放到package和类之间

    3. String类可以用于数据比较读取（改查）等操作，要对字符串进行修改需要用（增删改查）StringBuffer或者StringBuilder，StringBuffer在字符串空间内对数据进行修改，线程安全；StringBuilder不是线程安全的，他比StringBuffer访问速度快。

    4. 参数传递：值传递，引用，指针

    5. finalize方法：在对象在被垃圾回收回收前调用的方法，可以用来清除对象，但是你不知道何时被调用，而且也不需要你自己完成

       ```java
       protected void finalize() ;
       ```

    6. Java所有类都是Object类的子类，如果没有指定一个父类，那么Java自动继承Object类

12. Optional类型

    Optional类是一个包装器类，是一个泛型类，它可以对一个对象进行包装，检查一个类是否为空并且抛出空异常，如果为空，可以返回默认值。Optional类是对长变量方法的一种补充，比如下面的方法

    ```
    A.get().get().get().get().print()
    ```

    上面的代码如果在某个部分出现了空异常，那就是一个NuLLPointerException，这种时候我们很难确定是哪个类的get出现了这个异常。要防止这个异常，我们必须编写检查代码

    ```java
    if( A != Null){
    	B b = A.get() ;
    	if( b!= Null ){
    		C c = b.get() ;
    		...
    	}
    }
    ```

    1. Optional类的创建

       ```java
       Optional<T> a = Optional.of( t ) //这个t如果是一个Null，那么会返回NullPointerException
       Optional<T> a = Optional.ofNullable(t) //这个t允许是Null
       Optional<T> a = OPtional.empty() //返回一个包装为空的Optial类型
       ```

    2. Optinal类的内容获取

       ```java
       T t = a.orElse(new T()) //返回Optional类包装器内容，如果为Null那么久返回默认值
       ```

    3. Optional类的处理

       ```java
       a.isPresent(); //如果Optional类型为空，返回false，否则返回true
       ```

       

13. 对象序列化

    Java对象序列化是Java对象持久化的一种方法，通常一般使用数据库等持久化技术，对象序列化技术没人关注。Java实现了java.io.Serializable接口的类都是可序列化类。对象序列化可以把一个对象表示为一个字节序列，这个字节序列包含对象的类型、对象的数据以及数据的类型。反序列化需要指定数据的类型。对象序列化是JVM独立的，也就是说一个平台上序列化的对象可以在另外一个平台上反序列化得到同样的对象。

    如果对象的成员变量不想被序列化，那么就应该定义成瞬态（transient）或者静态（static），序列化的方法不能使用非序列化的成员变量，瞬态成员变量在反序列化之后会变成默认值。

    序列化对象保存在ser文件，类似Python字典的持久化一样

    ```java
    Series series = new Series(2,3) ;
    System.out.println(series.max()) ;
    
    
    //对象序列化
    try {
    	FileOutputStream fileOut = new FileOutputStream("C:\\Users\\cheng\\Desktop\\trash\\Series.ser") ;
    	ObjectOutputStream out = new ObjectOutputStream(fileOut) ;
    	out.writeObject(series);
    	out.close();
    	fileOut.close() ;
    	System.out.println("Seialized data is saved") ;
    }catch(IOException e) {
    	e.printStackTrace();
    }
    
    
    //对象反序列化
    Series series1 = null ;
    try {
    	FileInputStream fileIn = new FileInputStream("C:\\\\Users\\\\cheng\\\\Desktop\\\\trash\\\\Series.ser") ;
    	ObjectInputStream in = new ObjectInputStream(fileIn) ;
    	series1 = (Series)in.readObject() ;
    	in.close();
    	fileIn.close();
    }catch(IOException i) {
    	i.printStackTrace();
    return ;
    }catch(ClassNotFoundException c ){
    	c.printStackTrace();
    return ;
    }
    System.out.println( series1.max() ) ;
    ```

    

## Data type（计算机组成原理，计算机体系结构）  

#### primitive

Wrapper class of primitive type contain more usefull methods than bare primitive variables

包装类包含了对元数据的处理方法

1. boolean: 1 bit          
2. byte: 1 byte，4 bits
3. short: 2 bytes, 8 bits
4. int: 4 bytes, 16 bits
5. long: 8 bytes, 32 bits
6. float: 4 bytes, 单精度浮点数32位
7. double: 8 bytes，双精度浮点数64位
8. char 2 bytes，一个16位的Unicode字节，16位

#### reference

引用类型指向一个对象，在声明引用类型变量的时候就指定了他的数据类型，比如Dog类

数组和对象都是引用类型

1. String: varies

#### array

1. 数组的变量是数组引用类型，数组可以作为参数传递，也可以作为返回

   String[] cars ={ "abc", "bcd"} ;

   String[] [] cars = new String[3] [3] ;

   String: built in function

    1. String s ;
        	1. C++ : string
             	2. Python: string  ""
    2. s.equals() ;
    3. s.charAt(0); s[0] ;
    4. s.toUpperCase(); s.toLowerCase() ;
    5. s.indexOf("O") ;
    6. s.length() ;
    7. s.isEmpty() ;
    8. s.trim() ;
    9. s.replace('o', 'a') ;

2. ArrayList: a resizable array, store reference data types
    1. ArrayList<String> food = new ArrayList<String>() ;
        	1. C++: vector
            	2. Python: list []
    2. food.add('abc') ;
    3. food.set(0, 'cdb') ;
    4. food.get() ;
    5. food.remove(2) ;
    6. food.clear() ;

## Concepts

1. Loop : for(String i : animals)
   
1. Python: for i in animals
   
2. Overloaded methods( functions ): same method name but different parameters，重载：同一个类中方法名相同但是参数不同；重写：子类重写父类的方法

3. Formated output: System.out.printf("%,.2f", 123.423) ;

5. Name space:
    1. local variable, only visible in that method（局部变量）

        1. 局部变量旨在声明他的方法中可见，访问修饰符不能用于局部变量，局部变量在栈上分配，随着创建它的代码块的执行被创建，随着代码块执行完毕被销毁。

    2. global variable, visible in all the parts of the class（实例变量）

        1. 实例变量在类的方法之外声明，随着对象的创建创建，随着对象的销毁被销毁。实例变量至少被一个方法使用，才能从外部通过这些方法调用这些变量。实例变量可以加访问控制符，通过访问控制符，实例变量可以被直接访问。public的实例变量可以被外部直接访问，private的实例变量只能被本类访问，protected实例变量在子类可见。

   3. 类变量（静态变量，static关键字声明）

      1. 无论类创建了多少对象，静态变量只有一个拷贝。静态变量经常和public final使用被声明为常量。静态变量存储在静态存储区。静态变量可以通过className.variableName访问。

         ```java
         public static final String A="aaaaa" ;
         ```

### Java数据结构（数据结构和算法）

1. 基本数据结构

   1. 枚举（Enumeration），可以指向下一个元素
   2. 位集合（BitSet），按位操作，按位与或非
   3. 向量（vector），动态数组，和ArrayList相似，但是定义了一些ArrayList没有的方法
   4. 栈（stack）
   5. 字典，Dictionary。键值对映射，哈希表Hashtable实现了字典的map接口。Properties 类继承于Hashtable

2. 集合框架

    ![img](https://www.runoob.com/wp-content/uploads/2014/01/2243690-9cd9c896e0d512ed.gif) 

   1. **线性表List**

      1. **ArrayList**

         ArrayList 是一个动态修改的数组（[]），他转载的数据类型时引用类型，如果使用元数据类型，需要使用元数据类型的Wrapper类，ArrayList是一个数组队列，提供了增删改查等功能

          ![img](https://www.runoob.com/wp-content/uploads/2020/06/ArrayList-1-768x406-1.png) 

         1. 使用方法

            ```java
            //initiate
            ArrayList<String> lst = new ArrayList<String>() ;
            
            //add elements
            lst.add("a") ;
            lst.add("b") ;
            lst.add("c") ;
            
            //iterate by for-each
            for(String each: lst) {
            	System.out.println(each) ;
            }
            
            //iterate by for-index
            for(int i=0;i<lst.size();i++) {
            	System.out.println(lst.get(i)) ;
            }
            
            //iterate by iterator
            Iterator<String> iter = lst.iterator() ;
            while( iter.hasNext()) {
            	System.out.println(iter.next() ) ;
            }
            
            //modify
            lst.set(0, "d") ;
            System.out.println(lst.get(0)) ;
            ```

         2. 类似C++

            1. 静态数组 int A[10] ;
            2. 动态数组Vector<int> A ;

      2. **LinkedList（链表，队列，栈）**

         LinkedList不会顺序存储数据，而是在每个节点存到下一个节点的地址，可分为单向链表和双向链表。和ArrayList相比，LinkedList增加和删除效率高，查找和修改效率低。LinkedList实现了Dequeue接口，**可以作为队列使用**

          ![img](https://www.runoob.com/wp-content/uploads/2020/06/linkedlist-2020-11-16.png) 

         1. 使用方法

            ```
            LinkedList<String> lst = new LinkedList<String>() ;
            lst.addLast("a");
            lst.addFirst("b");
            
            for(int i=0;i<lst.size();i++) {
            	System.out.println(lst.get(i)) ;
            }
            for(String each:lst) {
            	System.out.println(each) ;
            }
            Iterator<String> iter = lst.iterator() ;
            while( iter.hasNext()) {
            	System.out.println(iter.next() ) ;
            }
            
            lst.set(0, "c") ;
            System.out.println(lst.get(0)) ;
            
            //delete 
            lst.removeFirst() ;
            for(int i=0;i<lst.size();i++) {
            	System.out.println(lst.get(i)) ;
            }
            ```

   2. 集合Set

      HashSet是基于HashMap实现的，是一个不允许有重复元素的集合，可以有null值且只有一个。HashSet是无序的。HashSet不是线程安全的，需要显示对线程进行同步。HashSet实现了Set接口

       ![img](https://www.runoob.com/wp-content/uploads/2020/07/java-hashset-hierarchy.png) 

      1. 使用方法

         ```
         HashSet<String> set = new HashSet<String>() ;
         set.add("a") ;
         set.add("b") ;
         
         for(String each: set) {
         	System.out.println( each) ;
         }
         Iterator<String> iter=set.iterator() ;
         while(iter.hasNext()) {
         	System.out.println(iter.next()) ;
         }
         
         set.remove("a") ;
         for(String each: set) {
         	System.out.println( each) ;
         }
         ```

   3. 映射Map

      HashMap是一个散列表，存储的内容是键值对的映射。HashMap实现了Map接口，根据建的HashCode存储数据，具有很快的访问速度，最多允许一条记录的建是null，不支持线程同步。HashMap是无序的

       ![img](https://www.runoob.com/wp-content/uploads/2020/07/WV9wXLl.png) 

      1. 使用方法

         ```java
         HashMap<Integer, String> map = new HashMap<Integer, String>() ;
         map.put(1, "a") ;
         map.put(2, "b") ;
         
         for(Integer each: map.keySet() ) {
         	System.out.printf("%d:%s\n", each, map.get(each) ) ;
         }
         
         map.put(1, "c") ;
         for(Integer each: map.keySet() ) {
         	System.out.printf("%d:%s\n", each, map.get(each) ) ;
         }
         ```

### Object oriented programming（面向对象编程，设计模式，软件工程)

1. object, an instance of a class
   
2. constructor and deconstructor
   
2. 类间关系：
   
   依赖：use a，A类作为B类的方法的参数或者方法内的成员变量
   
   聚合：has a，A类的成员变量包含B类
   
   继承：is a，B类继承了A类的许多方法和变量
   
2. 内部类：内部类，匿名类，静态内部类
   
   1. 内部类和匿名类都是差不多的内部类，只是匿名类不关心他的名字而做的。内部类和匿名类不能独立存在，必须依赖于外部类的实例存在的视厚才能获得建立这个类的实例。内部类的好处在于可以获取外部类的private变量，可以使用外部类的this关键字
   2. 静态内部类是用static修饰的内部类，它实际上是一个独立的类，可以不依赖于外部类的实例而存在，他的好处在于可以比普通类相比可以获取外部类的private变量，静态内部类不能使用this关键字
   
5. 抽象类和接口

   1. interface:  

          	1. similar to inheritance, a template used to specify what a class must do, a class can inherit only one parent class, but a class can apply more than one interface 
          	     	2. way: implements
          	   	3. 接口不能被实例化，接口没有构造方法，接口的方法都是抽象方法，接口不能包含成员变量，除了static和final变量，接口不是被类继承了，而是被类实现了，接口支持多继承。一个接口只含static或final变量，以及函数。每个函数都是抽象方法，只是在实现的时候被隐藏成default

   2. abstract:  abstract classes cannot be instantiated, but the can have a subclass; abstract method can be left not implemented. 抽象类和接口不能被实例化，但是可以被声明，然后指向实例化的子类。abstract修饰的方法不能和final合用，因为final目的方法不能在子类重写，而使用abstract的目的就是要重写，冲突；abstract修饰的方法不能和static合用，因为使用static目的是要实例化父类并且在所有实例化中共享一个方法或者变量的拷贝，而抽象类不能被实例化，所以用static修饰没有意义。

   3. 抽象类和接口的区别

          1. 抽象类中的方法可以包括非抽象方法，可以实现这个方法，而接口全都是抽象方法
          2. 抽象类中的变量可以是各种类型，但是在接口只能是public static final 类型
          3. 抽象类可以含有静态方法，但是接口全都是抽象方法
      4. 一个类只能继承一个抽象类，但是可以实现多个接口

   4. 重写接口中的方法时，需要注意下面规则

          1. 类在实现接口的方法时，不能抛出强制异常，只能在接口中，或者继承接口的抽象类中抛出该强制异常
          2. 雷灾重写方法时要保持方法名一致，并且应该保持相同或者相兼容的返回类型
      3. 如果实现接口的类时抽象类，那么没有必要都实现接口方法

   5. 实现接口注意规则

          1. 一个类可以实现多个接口
          2. 一个接口可以继承另外一个接口（extends）
          3. 一个抽象类可以实现另外一个接口（implement）
      4. 类的多继承不可以，但是接口的多继承可以（extends）

   6. 标记接口，一个没有任何方法的接口

      ```java
      public interface MyInterface{
      
      }
      ```
   	 标记接口主要有两个目的
          1. 建立一个公共的父接口
   	2. 把一个类编程接口类型，一个类继承了这个标记接口，就变成了一个接口类型。
   	
   7. 抽象类和接口的异同

      相同点

      1. 都不能被实例化
      2. 继承了抽象类和实现了接口的类只有实现了所有的抽象方法才能被实例化

      不同点：

      1. 接口的方法只有极了default关键字才能在接口里面实现；抽象类可以实现方法
      2. 一个类只能单继承一个抽象类，但是可以多实现多个接口
      3. 接口强调功能实现；抽象类强调类的所属关系
      4. 接口的字段默认时public static final并且必须在生命接口的时候赋值；抽象类的字段可以被修改，但是不能包含private、static、synchronized、native等关键字

5. encapsulation

      	1. attributes of a class will be hidden or private, can be accessed by methods(getter or setter), attributes should be made private. 
      	2. way: getter and setter

6. inheritance

    1. Way: extends: the process where one class acquires the attributes and methods of another 
      
    2. @Override: overriding,   sub class give its own implementation of a method already present in parent class
      
    3. super: keyword refers to the superclass, similar to keyword this, but used in subclasses
      
        	1. when override, use super to refer parent class's method, use this to refer this class
        	 
        	4. access level
        
         |  Modifier   | Class | Package | Subclass | World |
         | :---------: | :---: | :-----: | :------: | :---: |
         |   public    |   Y   |    Y    |    Y     |   Y   |
         |  protected  |   Y   |    Y    |    N     |   N   |
         | no modifier |   Y   |    Y    |    N     |   N   |
       |   private   |   Y   |    N    |    N     |   N   |
      
       If a class is public, classes within the package and out of the package can instantiate the class,  public method of class can be accessed everywhere, protected method can be accessed only by subclasses, private method can be accessed only by the class itself.
      
       父类声明位public的变量，子类声明位public的变量子类也是public，父类位protected的变量，子类位public或protected，private的变量不能被子类继承
      
       final方法，static方法，构造方法，可以继承但是不能重写，static方法可以重新声明
      
      	5. Java支持单继承，多重继承，不同类继承同一类，不支持多继承，也就是不支持
      
          ```java
          public class C extends A,B{
          
          }
          ```
      ```
      
      ```

7. polymorphism: the ability of an object to identify as more than one type

   多态：一个父类的变量声明，在使用的时候可以具体指向子类的实例。
   
   1. Way:
   
      ```
         public class Vehicle{} ;
         public class Car extends Vehicle{} ;
         public class Boat extends Vehicle{};
         Vehicle vehicle ;
         vehicle = new Car() ;
         vehicle = new Boat() ;
      ```
   
      2. when using polymorphism, the subclass will degenerate to its parent class, that is to say, vehicle can only access the method it contains when it changes to Car object or Boat object 
   
      3. 多态实现的必要条件
   
         1. 重写
   
         2. 继承
   
         3. 父类指向子类对象（父类指针向下转型指向子类对象，父类指针向上转型回到子类对象）
   
            ```
            Vehicle vehicle = new Car() ;
            vehicle.run() ;
            
            Car car = (Car)vehicle ;
            car.run() ;
            ```

### Thread（操作系统）

1. JVM allows an application to have multiple threads running concurrently. Each thread executes part of your code with the main thread. Each thread has a priority, threads with high priority are executed in preference compared to that with low priority.
   
2. When JVM starts, it runs main thread. JVM stops when the exit method is called or all threads have died. Threads will not interrupt each other even one of them stops.

3. 检查线程状态
   ```java
   Thread.currentThread.isactive()
   ```

4. *Daemon thread*, a low priority thread run in background to perform tasks like garbage collection.  JVM doesn't care whether daemon threads are running. JVM terminates itself when all *user threads* ( non-daemon threads ) are finished, then all the Daemon threads will be killed. Daemon thread shouldn't get access to files, cause it has to stop at any time.
   
5. Way: 2 ways to implement multiple threads
   1. thread subclass
   
      ```java
      public class MyThread extends Thread{
      	@Override
          public void run(){
              
          }
      }
      
      public class Main{
          public int main(String[] args){
      		MyThread mythread = new MyThread() ;
          }
      }
      ```
   ```
   
   ​	2. Runnable passed to Thread
   
      ```java
      public class MyRunnable implements Runnable{
      	@Override
          public void run(){
              
          }
      }
      
      public class Main{
          public int main(String[] args){
              MyRunable myrun = new MyRunnable() ;
              Thread thread = new Thread(myrun) ;
          }
      }
   ```

6. thread2 starts after thread1 is finished
   
      ```
      thread1.start() ;
      thread1.join() ;
      thread2.start() ;
   ```
   
   thread2 starts after thread1 executed some time
   
      ```
      thread1.start() ;
      thread1.join(3000) ;
      thread2.start()
      ```

7. 线程状态

    ![img](https://www.runoob.com/wp-content/uploads/2014/01/java-thread.jpg) 

      	1. 新建状态：使用new关键字创建一个线程对象就处于新建状态
      	2. 就绪状态：线程对象调用start()方法后，线程进入就绪状态，就绪状态的线程进入就绪队列中，等待JVM线程调度器调度
      	3. 运行状态：就绪状态的线程被分配CPU资源，得到执行
      	4. 阻塞状态：一个线程执行sleep、suspend等方法，失去占用的资源，线程从运行状态进入阻塞状态，在睡眠时间完成或者获得需要的资源后可以重新进入就绪队列，从而编程就绪状态。阻塞的状态有三种
      	      	1. 等待阻塞：线程调用wait()方法进入等待阻塞
      	           	2. 同步阻塞：线程获取synchronized同步锁失败（因为同步锁被其他线程占用）
      	                	3. 其他阻塞：线程调用sleep或join方法发出I/O请求时，线程进入阻塞状态，当sleep结束或者join等待超时或终止的时候、或者I/O处理完毕，线程进入就绪状态
      	          	5. 死亡状态：线程完成任务或者其他终止条件发生，线程切换到死亡状态

8. 线程优先级

   每个线程都有一个优先级，有助于操作系统确定调度顺序，线程优先级是一个整数（1-10），具有较高优先级的线程会被优先分配处理资源。但是，线程优先级不能保证线程执行的顺序。

9. 创建太多线程可能导致程序效率变低，因为上下文切换的时间要考虑

#### 多线程

1. 多任务可以有多进程实现，单进程多线程实现，多进程多线程实现进程是操作系统资源分配单位，线程是操作系统调度单位

   **多进程优点**：稳定性比多线程高，因为一个进程崩溃不会导致其他进程崩溃，一个程序使用多进程不会因为一个进程崩溃而导致整个程序崩溃，而多线程一个线程崩溃会导致整个进程崩溃，从而导致整个程序崩溃。

   **多线程缺点**：创建进程的开销比创建线程的开销大；进程间通信被线程间通信要慢，因为线程间通信只需要读写同一个变量

   **Java支持多线程**，每个程序都由一个JVM进程管理，JVM使用一个主线程来执行main方法，在main方法内部，我们可以启动多个线程。同时，JVM还运行这垃圾回收机制的线程

2. 一个线程通过start方法启动一个新线程，start方法只能调用一次；可以通过thread.setPriority( 4 )设置调度优先级，但是不能保证这个程序被优先执行，执行顺序依赖操作系统调度

3. 进程的终止

   ```java
   public class Main{
   	public static void main(String[] args) {
   		
   		FirstThread firstThread = new FirstThread() ;
   		firstThread.start();
   		
   		try {
   			Thread.sleep(2000);
   		} catch (InterruptedException e) {
   			// TODO Auto-generated catch block
   			e.printStackTrace();
   		}
   		
   		firstThread.interrupt();
   	}
   }
   
   public class FirstThread extends Thread{
   	@Override
   	public void run() {
   		SecondThread secondThread = new SecondThread() ; 
   		secondThread.start();
   		
   		try {
   			secondThread.join() ;
   		}catch(InterruptedException e) {
   			System.out.println("Interrupted secondThread");
   		}
   		
   		secondThread.interrupt();
   	}
   
   }
   
   public class SecondThread extends Thread {
   	@Override
   	public void run() {
   		while(true) {
   			if( ! isInterrupted() ) {
   				System.out.println("In SecondThread") ;
   			}
   		}
   	}
   }
   
   ```

   进程可以调用interrupt方法进行终止，在上面的实现中，我们可以看到三个进程，Main进程创建了FirstThread线程，FirstThread进程创建了SecondThread线程，当Main进程调用FirstThread的进程的interrupt方法之后，会让FirstThread进程的isInterrupted()方法的标志位变成true，同时，如果FirstThread的线程正在等待一个线程结束，那么会产生一个InterruptedException异常，在上面的代码里面我们捕获了这个异常进行处理，否则这个进程会直接终止，上面异常捕获之后，我们在下面的语句中终止了SecondThread线程。如果不终止这个线程，那么JVM不会终止，这个线程会一直运行。

	4. 多线程同步访问共享变量的正确性

    JVM的内存模型是，变量保存在主内存中，当线程访问变量时，他会先获取变量的一个副本，保存在自己的工作内存中，如果线程修改了一个变量的值，虚拟机会在某个时刻把修改的值写回到主内存。

    为了保证共享变量的正确读写，必须保证一组指令以原子的方式执行，即某一个线程执行时，其他线程必须等待，因此必须加锁。

    通过加锁，可以保证一组指令即便被中断，也不会有其他线程获取这个组的指令所获得的资源。只有线程将锁释放之后，其他线程才有机会获得这个资源。这种加锁解锁的区间，我们成为临界区，任何时刻，临界区最多只有一个线程执行。通过加锁和解锁保证一段代码的原子性。

    1. synchronized对临界区代码加锁和解锁实现共享变量同步

       注意加锁和解锁必须是同一个对象

       synchronized在获取锁进入临界区的时候从主存中读取

       添加锁的流程

       1. 找到线程中修改共享变量的代码块
       2. 选择一个共享实例作为锁
       3. 通过synchronized(lockedObject){ ... }对代码块进行加锁和解锁

       ```
       class Variable{
       	public static final Object lock = new Object() ;
       	public static int count = 0 ;
       }
       
       class IncVariable extends Thread{
       	@Override
       	public void run() {
       		synchronized(Variable.lock ){
       			Variable.count ++ ;
       		}
       	}
       }
       
       class DecVariable extends Thread{
       	@Override
       	public void run() {
       		synchronized(Variable.lock) {
       			Variable.count -- ;
       		}
       	}
       }
       
       public class Main{
       	
       	public static void main(String[] args) {
       		IncVariable inc = new IncVariable() ;
       		DecVariable dec = new DecVariable() ;
       		
       		inc.start();
       		dec.start();
       		
       		try {
       			inc.join();
       		} catch (InterruptedException e) {
       			// TODO Auto-generated catch block
       			e.printStackTrace();
       		}
       		try {
       			dec.join();
       		} catch (InterruptedException e) {
       			// TODO Auto-generated catch block
       			e.printStackTrace();
       		}
       		
       		System.out.println( Variable.count ) ;
       	}
       }
       
       ```

       

    2. volatile关键字修饰共享变量实现线程共享变量的同步

       每次访问变量时，线程总是获取主内存最新值

       每次修改变量后，线程立刻写到主内存，并且通过CPU总线嗅探机制告知其他线程主内存发生改变，需要重新从内存中读取

       **CPU总线嗅探机制**：为了实现缓存一致性，米格处理器（线程）监听总线上传播的数据（主内存）来检查自己缓存（本地缓存）中的数据是否过期，如果过期就重新读取主存。

       **指令重排序**： Volatile修饰的共享变量在保证一致性的同时，禁止了指令重排序优化（使用内存屏障实现），保证了被volatile修饰的共享变量在编译后执行的顺序于代码顺序相同。

    3. synchronized 鱼volatile的选择

       1. 选择synchronized的情况
          - 运算结果以来了共享变量某一时刻的值
          - 多个线程同时对共享变量进行修改（总线嗅探机制无法应对多个线程对共享变量同时修改）
          - 需要对多个共享变量同时同步
       2. 选择volatile的情况
          - 尽量避免使用volatile
          - 对共享变量的写入不依赖于某一时刻的值

	5. 锁的类型

    - 重量级锁、悲观锁

      Lock接口

    - 轻量级锁、自旋锁、乐观锁

      - 写时复制 copy on write, COW

        当线程执行时，会读取变量的拷贝到本地内存，在本地内存上实现对这个数据进行修改，在线程执行完成才把修改写道主内存

        实现COW的集合类：ConcurrentHashMap，ConcurrentLinkedQueue，CopyOnWriteArrayList，CopyOnWriteSet

      - 比较交换Compare and swap, CAS

        JVM地层实现使用CPU源于中的锁来保证原子性，没有使用操作系统的，所以时轻量级锁

        实现CAS的类：Atomic类

        ABA问题：初始值为A，被改为B后又改为A，对外不知道被修改过

      - 抽象队列同步器 Abstract Queued Synchronizer，AQS

    - 偏向锁

      

    

    

	6. 守护线程

    用户编写的线程里面有一类为其他线程提供服务的线程，用户不关心他们什么时候结束，只要非守护线程都结束之后能结束就行，这类线程就可以设置成守护线程。守护线程的设置只需要在start()方法之前调用setDaemon方法设置就行。

    ```
    Thread t = new MyThread() ;
    t.setDaemon(true) ;
    t.start() ;
    ```

    



### 网络编程（计算机网络)

程序在多个设备上运行，通过网络链接起来

1. java.net包提供了两个钟网络协议支持
    1. TCP，Transmission Control Protocol， 传输控制协议，是一种面向连接的、可靠的、基于字节流的传输层通信协议，位于IP层之上，应用层之下，保证了两个应用程序之间可靠通信
    2. UDP，User Datagram Protocol，用户数据报协议，位于OSI模型的传输层，是一个无连接的协议提供了应用程序之间发送数据的数据报，UDP是不可靠的无连接的协议，允许数据错误丢失和重复的数据报。

2.  客户端网络编程和Web网络编程

   1. Socket编程

      1）服务器实例化一个ServerSocket对象，调用SeverSocked的accept()方法，一直等待，知道客户端连接到服务器上给定的端口

      2）客户端实例化一个Socked对象，指定服务器名称和端口号请求连接，如果可以连接，则建立一个可以和客户端连接的Socket对象

      3）服务端accept()方法返回服务器上一个新的Socket引用，连接到客户端socket。

      4）连接创建以后，通过IO流进行通信，每一个socket都有一个输出流和一个输入流，客户端的输出流连接到服务端输入出流，客户端的输入流连接到服务端的输出流。

      TCP是一个双向通信协议，因此数据可以在两个数据流中同时发送。

      ```java
      ///////////////////////////////////客户端/////////////////////////
      String serverName = "localhost" ;
      int port = 6066 ;
      
      try {
      	//尝试创建套接字，连接服务器
          System.out.println("connect to localhost:6066") ;
          Socket client = new Socket(serverName, port) ;
          System.out.println("remote address: "+ client.getRemoteSocketAddress() ) ;
      	
          //连接到服务器后，创建传输通道进行数据传输，分为写通道
          OutputStream outToServer = client.getOutputStream() ;
          DataOutputStream out = new DataOutputStream(outToServer) ;
      	//向写通道写入数据
          out.writeUTF("Hello, this is client");
      
          //创建读通道
          InputStream inFromServer = client.getInputStream();
          DataInputStream in = new DataInputStream(inFromServer) ;
      	//从都通道读数据
          System.out.println("server response: "+ in.readUTF() ) ;
      
      	//关闭连接
          client.close();
      
      }catch(IOException e ) {
      	e.printStackTrace();
      }
      
      
      
      
      //////////////////////////////////////服务端/////////////////
      //开一个服务器线程
      public class GreetingServer extends Thread{
      	private ServerSocket serverSocket ;
      	
      	public GreetingServer(int port) throws IOException{
      		serverSocket = new ServerSocket(port) ;
      		serverSocket.setSoTimeout(60000);
      	}
      	
      	public void run() {
      		while(true) {
      			try {
                      //创建ServerSocket并调用accept等待
      				System.out.println("Waiting connection, port is "+serverSocket.getLocalPort() ) ;
      				Socket server = serverSocket.accept() ;
      				
                      //创建读数据通路，从客户端读数据
      				System.out.println("Remote address: "+server.getRemoteSocketAddress() ) ;
      				DataInputStream in = new DataInputStream(server.getInputStream() ) ;
      				System.out.println(in.readUTF() ) ;
      				
                      //创建写数据通路，向客户端写数据
      				DataOutputStream out = new DataOutputStream(server.getOutputStream() ) ;
      				out.writeUTF("This is server "+ server.getLocalSocketAddress() );
      				
                      //关闭服务端
      				server.close();
      			}catch(SocketTimeoutException s) {
      				s.printStackTrace();
      				break ;
      			}catch(IOException e) {
      				e.printStackTrace();
      				break ;
      			}
      		}
      	}
      	
      }
      ```
      
   2.  Web 编程
   
      1. WebServer(Tomcat/servlet/JSP)
   
         ***Tomcat 是一个web容器***，负责管理servlet服务器小程序，把客户端请求映射到对应的servlet，将servlet的处理结果返回给客户请求
   
         ***JSP引擎***，JSP引擎是一个服务器小程序，被web容器（例如Tomcat）管理。当客户端传递一个JSP文件请求的时候，web容器判断这个对JSP文件的请求，JSP引擎获取那个JSP文件，将他编译成servlet类返回给servlet引擎，servlet引擎执行这个servlet类获得一个静态html网页，将这个网页返回给客户端。（JSP创建的JSP文件对应的servlet类会保留，如果下一次继续访问这个JSP文件，那么就会修改这个servlet类，从而保证效率）
   
         ![img](https://www.runoob.com/wp-content/uploads/2014/01/jsp-processing.jpg)
   
         **JSP文件生命周期**： 一个JSP文件生命周期包括四个阶段
   
         	1. 编译阶段： 一个JSP请求到来，JSP引擎判断这个JSP请求是否已经创建了他的servlet类，如果没有，则解析对应的JSP文件，将他转化成servlet类，并且编译这个servlet类。
         	1. 初始化：由jspInit()负责
         	1. 执行：根据一些列定义的方法执行
         	1. 销毁：
   
         **Servlet表单数据**
   
         ```html
         <!-- HelloWorldGet.html -->
         <!-- 使用GET方法传递参数-->
         <!-- 点击之后网址显示 http://localhost:8080/TomcatTest/HelloServlet?name=abc&url=abc -->
         <!DOCTYPE html>
         <html>
         <head>
         <meta charset="utf-8">
         <title>菜鸟教程(runoob.com)</title>
         </head>
         <body>
         <form action="HelloServlet" method="GET">
         网址名：<input type="text" name="name">
         <br />
         网址：<input type="text" name="url" />
         <input type="submit" value="提交" />
         </form>
         </body>
         </html>
         
         <!-- HelloWorldPost.html -->
         <!-- 使用POST方法传递参数-->
         <!-- 点击之后网址显示 http://localhost:8080/TomcatTest/HelloServlet -->
         <!DOCTYPE html>
         <html>
         <head>
         <meta charset="utf-8">
         <title>菜鸟教程(runoob.com)</title>
         </head>
         <body>
         <form action="HelloServlet" method="POST">
         网址名：<input type="text" name="name">
         <br />
         网址：<input type="text" name="url" />
         <input type="submit" value="提交" />
         </form>
         </body>
         </html>
         
         
         ```
   
         ```java
         //服务器获取表单数据
         String name =new String( request.getParameter("name") );
         ```
   
         

###  JDBC连接数据库（数据库设计）

关系型数据库：MySQL、Oracle、DB2、PostgreSQL

非关系型数据库：Redis、MongoDB、HBase

**ORM**：object relational mapping，对象关系映射。JAVA连接数据库的标准接口是JDBC，但是使用JDBC访问数据库非常繁琐，因此产生了对JDBC进行封装的ORM框架，自动产生SQL语句访问数据库。ORM框架建立起关系数据库和对象（JAVA类）的映射，一种最简单的映射关系是每个类对应一张表，每个实例对应表的一个记录，类的每个属性对应表的每个字段。ORM框架有**MyBatis、Hibernate、SpringJDBC**等。Hibernate是一个标准的ORM框架，建立了实体类和数据库的完整的映射，基本不需要开发人员写SQL语句，内部自动生成SQL语句，这样也造成无法优化SQL语句。Mybatis是一个半自动框架，他只在实体类和SQL之间建立映射关系，并不自动生成SQL语句，因此开发人员可以自己写SQL语句，方便优化。

1. Mysql命令

   ```
   show databases ;
   create database adatabase ;
   use adatabase ;

   show tables ;
   create table `atable`(
   	`id` int not null auto_increment comment 'id' ,
   	`name` char(20) not null comment 'name',
   	primary key (`id`)
   ) ;

   drop adatabase ;
   drop atable ;

   insert into atable(name) values
   	('a'),('b'),('c'),('d') ;
   select * from atable ;

   delete from atable where id = 3 ;
   select * from atable ;

   update atable set name='e' where id=3 ;
   select * from atable ;

   select * from atable where id>=3 ;
   ```

2. JDBC连接Mysql

```
public class Main {
   static final String JDBC_DRIVER = "com.mysql.cj.jdbc.Driver" ;
   static final String DB_URL = "jdbc:mysql://localhost:3306/adatabase?useSSL=false&allowPublicKeyRetrieval=true&serverTimezone=UTC";

   static final String USER = "root" ;
   static final String PASS = "cheng" ;

   public static void main(String[] args) {
   	Connection conn = null ;
   	Statement stmt = null ;
   	
   	try {
   		//注册JDBC驱动
   		Class.forName(JDBC_DRIVER) ;
   		
   		//连接数据库
   		conn = DriverManager.getConnection(DB_URL, USER, PASS) ;
   		
   		//执行命令
   		stmt = conn.createStatement() ;
   		
   		String sql ;
   		sql = "select * from atable" ;
   		ResultSet rs = stmt.executeQuery(sql) ;
   		
   		while(rs.next() ) {
   			int id = rs.getInt("id") ;
   			String name = rs.getString("name") ;
   			
   			System.out.printf("%d %s\n",id, name ) ;
   		}
   		
   		rs.close();
   		stmt.close();
   		conn.close();
   	}catch(SQLException se) {
   		se.printStackTrace();
   	}catch(Exception e) {
   		e.printStackTrace();
   	}finally {
   		try {
   			if(stmt != null) {
   				stmt.close();
   			}
   		}catch(SQLException se ) {
   			se.printStackTrace();
   		}
   	}
   }
}

```



### Java Optional类型

Optional类是一个包装器类，是一个泛型类，它可以对一个对象进行包装，检查一个类是否为空并且抛出空异常，如果为空，可以返回默认值。Optional类是对长变量方法的一种补充，比如下面的方法

```
A.get().get().get().get().print()
```

上面的代码如果在某个部分出现了空异常，那就是一个NuLLPointerException，这种时候我们很难确定是哪个类的get出现了这个异常。要防止这个异常，我们必须编写检查代码

```java
if( A != Null){
	B b = A.get() ;
	if( b!= Null ){
		C c = b.get() ;
		...
	}
}
```

1. Optional类的创建

   ```java
   Optional<T> a = Optional.of( t ) //这个t如果是一个Null，那么会返回NullPointerException
   Optional<T> a = Optional.ofNullable(t) //这个t允许是Null
   Optional<T> a = OPtional.empty() //返回一个包装为空的Optial类型
   ```

2. Optinal类的内容获取

   ```java
   T t = a.orElse(new T()) //返回Optional类包装器内容，如果为Null那么久返回默认值
   ```

3. Optional类的处理

   ```java
   a.isPresent(); //如果Optional类型为空，返回false，否则返回true
   ```

   

### Java对象序列化

Java对象序列化是Java对象持久化的一种方法，通常一般使用数据库等持久化技术，对象序列化技术没人关注。Java实现了java.io.Serializable接口的类都是可序列化类。对象序列化可以把一个对象表示为一个字节序列，这个字节序列包含对象的类型、对象的数据以及数据的类型。反序列化需要指定数据的类型。对象序列化是JVM独立的，也就是说一个平台上序列化的对象可以在另外一个平台上反序列化得到同样的对象。

如果对象的成员变量不想被序列化，那么就应该定义成瞬态（transient）或者静态（static），序列化的方法不能使用非序列化的成员变量，瞬态成员变量在反序列化之后会变成默认值。

序列化对象保存在ser文件，类似Python字典的持久化一样

```java
Series series = new Series(2,3) ;
System.out.println(series.max()) ;


//对象序列化
try {
	FileOutputStream fileOut = new FileOutputStream("C:\\Users\\cheng\\Desktop\\trash\\Series.ser") ;
	ObjectOutputStream out = new ObjectOutputStream(fileOut) ;
	out.writeObject(series);
	out.close();
	fileOut.close() ;
	System.out.println("Seialized data is saved") ;
}catch(IOException e) {
	e.printStackTrace();
}


//对象反序列化
Series series1 = null ;
try {
	FileInputStream fileIn = new FileInputStream("C:\\\\Users\\\\cheng\\\\Desktop\\\\trash\\\\Series.ser") ;
	ObjectInputStream in = new ObjectInputStream(fileIn) ;
	series1 = (Series)in.readObject() ;
	in.close();
	fileIn.close();
}catch(IOException i) {
	i.printStackTrace();
return ;
}catch(ClassNotFoundException c ){
	c.printStackTrace();
return ;
}
System.out.println( series1.max() ) ;
```



### Java泛型

1. 泛型类

   ```java
   public class A<T,U>{
   
   }
   ```

2. 泛型方法

   ```java
   public static<T> T A(T t ){
   
   }
   ```

3. 范型变量的限定，如果泛型带有方法，需要用extends继承对应的类，下面是限定泛型的方法

```java
//泛型方法-带泛型边界，E是一个可比较对象
public static <E extends Comparable<E>> E max(E a, E b ) {
    E e = a ;
    if( b.compareTo(e)> 0 ) {
    	e = b ;
    }
    return e ;
}

//泛型上界-E是Integer或者他的子类
public static <E extends Integer> E max(E a , E b ) {
    E e = a ;
    if( b.compareTo(e)>0 ) {
        e = b ;
    }
    return e ;
}

//泛型类-类似C++类模板
public class Main <T> {
	T a ;
	public void setter(T a) {
		this.a = a ;
	}
	public T getter() {
		return this.a ;
	}

	public static void main(String[] args) {
		Main<Integer> main = new Main<Integer>() ;
		main.setter(1);
		Integer num = main.getter() ;
		
		System.out.println(num) ;
	}
}

```

4. 泛型在JVM中的处理

   1.  泛型擦除

      JVM没有泛型类，所以泛型会被编译器编程限定的对象，如果没有限定泛型类型，那么泛型类型会被指定位Object

      ```
      //泛型类
      public class A<T,U>{
      	private T t ;
      	private U u ;
      }
      
      //编译器编译
      public class A{
      	private Object t ;
      	private Object u ;
      }
      
      //泛型方法
      public static<T> T A(T t){
      	return t ;
      }
      
      //编译器编译
      Object t; //内部类
      public Object A(Object t){
      	return t ;
      }
      ```

   2. 泛型的限制

      1. 泛型不能被实例化，但是可以通过函数式接口Supplier<T> 表示一个无参数且返回类型为T的方法

         ```java
         public static<T> A<T> constructA( Supplier<T> supplier){
         	return new A<>(supplier.get() ) ;
         }
         ```

      2. 不能构造泛型数组

### Java反射机制

   一种动态获取类的信息以及动态调用对象的方法的功能。

   在程序运行过程中，获取类或者对象的属性和方法信息。实际就是查看源代码里面对类的定义获得的信息。

   ```
   Car car = new Car() ;
   Class cls = car.getClass() ;

   Method[] declaredMethods = cls.getDeclaredMethods() ;
   for( Method method: declaredMethods) {
   	System.out.println(method.getName() ) ;
   }
   ```

   

### Java注解

注解的价值体现在Java反射的过程中，具体实现包括：

- 文件自动生成，如bean等
- 测试、日志、事务等代码的自动生成
- 框架编写（比如使用JUnit4工具调用所有被特定注解@Test标注的方法）

Java的一些标准注解

| 注解名           | 作用位置                               | 作用                            |
| :--------------- | -------------------------------------- | ------------------------------- |
| Deprecated       | 全部                                   | 将被标注的东西标记为不支持的    |
| SuppressWarnings | 除了PACKAGE与ANNOTATION_TYPE的其他位置 | 将被标注的位置的Warning信息屏蔽 |
| Override         | Method                                 | 检查方法是否重写了              |
| Documented       | ANNOTATION_TYPE                        | 说明这个注解被包含在javdoc中    |
| Resource         | TYPE，FIELD                            | 标注会使用到的资源              |
| Target           | ANNOTATION_TYPE                        | 说明注解的位置                  |
| Retention        | ANNOTATION_TYPE                        | 说明注解的声明周期              |
| Inherited        | ANNOTATION_TYPE                        | 声明注解可以被子类继承          |



注解是一个无参数方法类，主要用来对类、方法、变量等进行约束，比如使用注解并且配合反射机制动态检查参数的范围。

1. 注解的分类

   注解根据存在时期和使用对象分为三类，一种是编译器使用的注解，比如@Override会让编译器强制检查方法是否被重写，@SuppressWarnings会让编译器忽略代码产生的警告；第二种注解是工具处理字节码文件使用的注解，一般是底层库使用的注解，一般会改变字节码文件，比如对字节码文件进行部分优化；第三种是运行时使用的注解，这种注解可以配合反射机制动态控制类、方法、参数的行为，有些时JVM自动识别使用的，有些可以自己编写。第一种注解被编译器使用之后丢弃，不会出现在字节码中；第二种注解会被JVM加载执行当时不会出现在程序执行的内存中；第三种注解会出现在程序执行的内存里面。

2. 注解的定义

   定义注解实际上时编写一个无参数方法的类，有一些注解时JVM使用的元注解，可以用来修饰注解。

   1. @Target，用来修饰注解的使用位置，包括类、方法、构造方法、字段、方法参数五个类型
   2. @Retention，用来定义注解的生命周期，包括编译器、class文件期和运行时期
   3. @Repeatable，用来定义注解可以重复
   4. @Inherited，定义注解是否可以被子类继承，这个注解只能用来修饰使用了@Target(Element.Type.TYPE)的注解

   下面时一个注解的定义的模板，这里定义了一个在运行期的只能用来修饰类或接口、方法的注解Report

   ```java
   @Target([ElementType.TYPE, ElementType.METHOD])
   @Retention(RententionPolicy.RUNTIME)
   public @interface Report{
       int type() default 0;
       String level() default "info";
       String value() default "";
       int min() default 0;
       int max() default 100;
   }
   ```

3. 注解的使用

   运行期的注解不会被编译器有什么影响，必须利用反射机制编写获取这些注解的方法来使用这些注解，下面的方法获取注解来检查字段变量的范围。

   ```java
   public class Person{
       @Range(max = 10)
       public String city;
   }
   
   void check(Person person) throws IllegalArgumentException, ReflectiveOperationException{
       for(Field field: person.getClass().getFIelds() ){
           Range range = field.getAnnotation(Range.class) ;
           if (range != null){
               Object value = field.get(person) ;
               if( value instanceof String){
                   String s = (String) value ;
                   if( s.length()< range.min() || s.length()> range.max() ){
                       throw new IllegalArgumentException("INvalid field: "+ field.getName() ) ;
                   }
               }
           }
       }
   }
   ```

   

   

### JAVA8 流编程



### Exceptions(异常处理)

```
1. an event occurs during the execution of a program that disrupts the normal flow of the instructions

2. Way:
```

```java
 try{
 
 }
 catch(Exception e){
 	System.out.println("an error occur in ...") ;
 }
 finally{
 
 }
```

1. Java 异常的层次结构

   ![](https://github.com/AlbertoWang/java-noob/raw/master/Java%E5%9F%BA%E7%A1%80.assets/exception_structure.png)

   1. Error系列：系统内部错误，资源耗尽等
   2. RuntimeException系列：错误的强制类型转换、数组越界(ArayIndexOutOfBoundException)、访问null错误（NullPointerException)
   3. 非RuntimeException系列：文件读写错误（IOException)，类不存在

## 框架

### Spring

1. spring, spring mvc, spring boot, spring cloud

   spring 是一个实现控制反转(IoC)和面向切片编程(AOP)的框架；spring mvc是基于spring的mvc框架，和struts2同性质；spring boot是基于spring mvc，集成了tomcat，支持REST，继承了maven/gradle简化了jar文件的下载和配置；spring cloud是基于spring boot， spring boot 是集鉴权、路由等功能于一体的单体应用，spring cloud是一个专注于一个功能的spring boot应用组成的分布式应用。

## JVM相关

1. 对象的大小包括markword（包括锁、GC分代年龄、hashcode等，8字节）、class pointer（说明指向哪个对象）、instance data（字段的大小）、pading（将整个对象大小补齐到8的整数倍）

2. Java代码执行过程：.java编译成.class，通过ClassLoader加载到JVM。类保存在方法去Method Area，类的实例保存在虚拟机堆JVM Heap，调用方法的过程会使用到虚拟机栈JVM Stacks、程序计数器Program Counter Register和本地方法区Native Method Area

3. JMM

   1. 分区

      线程私有：程序计数器，虚拟机栈（描述Java方法执行过程，包括局部变量、操作栈、返回地址等），本地方法去（描述Native方法过程）

      线程共享：方法区（存储类的信息、常量、静态变量、常量池等），虚拟机堆（创建的对象都在这里，GC主要区域）

   2. 引用类型：

      - 强引用：常用引用方式，不会被GC
      - 软引用：内存不足会被GC
      - 弱引用：优先被GC
      - 虚引用：跟踪对象GC状态

### JVM类加载

#### 类加载流程

1. 加载：JVM读取.class文件到方法区，在堆中创建Class对象
2. 验证：验证.class文件符合JVM要求，满足安全
3. 准备：在方法区为类变量分配内存空间，设置初始值
4. 解析：将常量池堆符号引用替换为直接引用
5. 初始化：执行构造函数的<client>方法，限制性父类的初始化才能执行子类的初始化

#### 双亲委派机制

用来保障类的安全性和唯一性。类加载时，先不加载此类，而是把类加载请求向上委派给父类完成；若父类无法加载该类，才会向下委派子类加载器来加载。

1. UserClassLoader挂载到ApplicationClassLoader
2. 委托给ExtensionClassLoader
3. 委托给BootstrapClassLoader
4. BootStrapClassLoader查找并加载.class文件，若不存在则交给ExtensionClassLoader
5. ExtensionClassLoader查找并加载.class文件，若不存在则交给ApplicationClassLoader
6. ApplicationClassLoader查找并加载.class文件，若不存在则交给UserClassLoader
7. UserClassLoader查找并加载.class文件，若不存在则抛出ClassNotFound

## Packages 

1. ***GUI: javax.swing.JOPtionPane***

   ​	1. Python GUI: tkinter

2. Scanner: java.util.Scanner       
    1. C++: cin, 
    2. Python: input, with open('') as file:

3. Math: Math
    1. C++: math
    2. Python: math

4. Random: java.util.Random
    1. C++: random
    2. Python: random
5. Check file: java.io.File
6. Read file: java.io.FileReader
   1. C++: ifstream cin("a.txt"); cin.close() ;
   2. Python: with open('a.txt', 'r') as f: f.readlines()
7. Write into file: java.io.FileWriter
   1. C++: ofstream cout("a.txt"); cout.close() ;
   2. Python: with open('a.txt', 'w') as f: f.writeline()
8. Exceptions: java.io.IOExcepttion

## Notes

1. friend method: 

   ```java
   Car car1 = new Car() ; 
   Car car2 = new Car() ;
   car1=car2 ;
   ```

   

   this variable car is a reference

   car1 store the same reference of car2 

   if you want to copy the variables from car2 into car1, you have to write a friend function to do the operation.

   1. C++: friend method
   2. Python: deepcopy

2. compile and run Java with command prompt 

   ```shell
   javac HelloWorld.java \\to compile
   java HelloWorld \\to run
   ```

3. export executable Jar file

4. 静态方法和变量不属于实例，静态方法内部不能使用this关键字。静态方法和静态变量常常用于辅助方法。接口不能定义实例变量，但是可以定义静态final变量，接口定义的变量都是public static final修饰的

   

## 考试题目

1. Java中+的优先级大于==优先级，所以

   ```java
   System.out.println("a "+ "a" == "a" ) ;
   ```

   等价于

   ```java
   System.out.println("a a" == "a")
   ```

   这个输出是false

2. Java中if(expression)的expression是比较表达式，必须返回true或者false，不能是数字，所以

   ```
   if(x=1){
   
   }
   ```

   会产生编译错误。这跟C++不一样，Java的数字不能转成boolean类型。

3. Java 的char类型

   ```java
   char c = 65;
   System.out.println("c = "+c);
   ```

   因为c变量位char类型，65对应的ASCII码是A

4. Java实例变量不需要显示初始化（不初始化那么在实例化对象的时候会使用默认值初始化），局部变量必须显示初始化（声明的时候可以不初始化，但是一定要在一个地方初始化）

   **Java对象的创建：** 创建对象分为两个阶段，首先是声明阶段，声明阶段会在线程的栈区创建对象的引用（线程栈区保存基本类型和对象的引用），此时这个引用会被赋值为默认的null值。其次是实例化阶段，实例化阶段会在堆区创建对象的实例化，对于对象的实例变量，首先会赋值一个默认值，如果这个变量有显示赋值，那么之后用显示赋值覆盖默认值，之后调用对象的构造函数，如果构造函数对这个实例变量有赋值，那么就用这个赋值覆盖之前的默认值或者显示赋值。在堆区创建好对象的实例化之后，这个实例化的地址会被赋值给栈区的引用。如果一个对象的实例化失去了线程栈区对他的引用，那么这个对象可能之后会被Java垃圾回收机制回收。**基本数据类型和对象引用在栈上分配，实例化对象和数组在堆上分配。**

   **空引用可用于访问静态变量或方法**：Java的静态成员和方法是依赖于类的，而不是实例的，所以可以用空引用访问静态成员和方法，也就是下面的代码不会报错。但是这样的方法不是调用静态变量和方法的常用方法。

   ```java
   public class Student{
   	public static int a = 0 ;
   	public static void main(String[] args){
   		Student student = null ;
           
   		//空引用访问静态变量不会报错
   		Sytem.out.println(student.a) ;
   	}
   }
   ```

   

5. Math.round()默认是四舍五入到整数

6. Java不支持goto关键字

7. 异常类的基类是Java.Lang.throwable

8. 面向对象编程意味着（根据分析问题时发现的对象设计应用程序）

9. 一个对象可能是任何事物，面向对象的思想是万物皆为对象，也就是说任何事物都能封装成对象

10. is 开头的命名方式一般用于布尔值判断 ，则isSwimmer用于boolean类型

11. Java源文件名命名规则：源文件名必须以.java结尾，如果源文件没有public类，则源文件名可以是任意的，但是如果有public类，那么源文件名必须和public类的类名相同。一个源文件有且只能有一个public类，但是可以有多个非public类。

12. Java严格数据类型，相互转换要经过强制类型转换，否则编译错误。下面会编译错误

    ```java
    int a = 6.6 ;
    ```

13. 引用传递会创建一个新的引用变量，只是他们数值指向相同的地址，但是分别对他们数值修改不会相互影响

    ```java
    Student s1 = new Student() ;
    Student s2 = s1 ;
    s2 = new Student() ;
    //此时对s2的修改并不会影响s1指向第一个创建的对象，在参数传递的时候依然一样不会影响
    ```

14. Java的static方法只能调用static方法，Java静态方法不能调用非静态方法

15. Java不允许参数设置默认值，下面的代码报错

    ```java
    public int func(int x=0){
    	return x ;
    }
    ```

16. Java 的hashcode()

    如果是String对象，hashcode根据字符串内容获得，具有相同字符串的String对象hashcode相等

    如果是Integer对象，hashcode就是Integer数值

    如果是其他对象，hashcode是根据对象的JVM分配的内存地址获得的，如果两个引用变量不是指向同一个实例，hashcode不一样，当然，hashcode可以强行改变。

17. Java引用数据类型，比较数值使用.equals()，比较地址使用==

18. Java的String对象调用toUpperCase()的函数不会改变本地成员变量，只会返回成员变量变化的结果



# Effective Java

1. 私有constructer：防止类被实例化

   ```java
   public class A{
   	private A(){
   		throw new AssertionError() ;
   	}
   }
   ```

2. 依赖注入：类A使用另一个类B（这个类被称为依赖），类A需要在自己成员变量声明这个依赖。

   依赖注入的三种方式

   - Constructor注入
   - setter注入
   - 接口注入

   ```java
   public class A{
   	private final B b ;
   
       //constructor注入
   	pubclic A(B b1){
   		this.b = b1 ;
   	}
       //setter注入
       public void setter(B b1){
           this.b = b1 ;
       }
   }
   ```

3. 单例模式Singleton：仅会被构造一次的对象

   有些类希望在整个程序过程中只有一个实例。单例模式使用的场景

   - 有些类的实例化消耗资源多，但又需要频繁用到，比如一些工具类（打印机类）
   - 频繁访问数据库或文件的对象

   构建方法：这种构建方法优点是在类的加载过程就创建了类的实例，之后使用的时候只需要使用getInstance获取这个实例就可以了，避免了线程安全问题。缺点是不是Lazy Load，可能这个运行期都用不到这个实例，造成资源浪费。

   ```java
   public class Singleton{
   	private static final Singleton INSTANCE = new Singleton() ;
   	
   	public Singleton(){
   	
   	}
   	
   	public static Singleton getInstance(){
   		return INSTANCE ;
   	}
   }
   ```

4. 构造者模式Builder：多参数时使用Builder进行参数传递，参数少优势不明显

5. 静态工厂模式static factory：一个对象创建他很消耗资源，不应该频繁创建和销毁，因此

# 设计模式

## 控制反转 IoC Inverse of Control

类A要使用类B，一种模式是直接new一个类B的实例，这种实现方式在替换B的子类的时候需要重新写A给他new 一个B1的实例，不方便。另外一个实现方式是A声明B父类变量，然后使用依赖注入的方式给这个父类声明赋值。在Spring中使用一种容器把这些类关系进行管理，通过配置文件来进行依赖注入，实现了A类不是自己new 一个对象，而是向Spring容器请求一个对象的模式，让Spring容器去创建和管理类对象。

## 依赖注入 DI Dependency Injection

一个类A使用另外一个类B，对这个类B的声明赋值的方式。依赖注入（给A成员变量B进行赋值的方式）有三种

1. constructor注入
2. setter注入
3. 接口注入

## 面向切面编程AOP  Aspect Oriented Programming

AOP是OOP的补充，OOP关心的是类的纵向的继承关系，AOP关心的是多个类共同需要实现的功能的类。



## 设计原则SOLID

1. 单一原则：每个类只负责单一的任务，减少耦合性

2. 开闭原则：只是对旧代码进行扩展而不是进行修改

3. 里氏替换原则：子类可以增加父类的功能但不能修改父类的功能。

   实现方式

   - 子类可以增加自己的函数
   - 子类可以实现父类抽象方法，但不能重写父类非抽象方法
   - 子类重载父类方法，参数不能比父类更严格
   - 子类实现父类 抽象方法，返回值不能比父类更宽松

4. 接口隔离：给每个类建立一个专用的接口，而不是用一个大接口供很多类实现，类的依赖关系依靠接口的依赖

5. 依赖倒置：上层模块不依赖下层模块，依赖于抽象；抽象不依赖细节，细节依赖于抽象。



## 设计模式

1. 单例模式：类只能实例化一次

   ```
   public class Singleton{
   	public Singleton(){
   	
   	}
   	
   	public static class Instance{
   		public static final Singleton INSTANCE = new Singleton() ;
   	}
   	
   	public static final Singleton getInstance(){
   		return Instance.INSTANCE ;
   	}
   }
   ```

2. 工厂模式

   ![](https://www.runoob.com/wp-content/uploads/2014/08/AB6B814A-0B09-4863-93D6-1E22D6B07FF8.jpg)

   工厂方法的目的是使得创建对象和使用对象是分离的，并且客户端总是引用抽象工厂和抽象产品

   ```java
   public interface NumberFactory {
       // 创建方法:
       Number parse(String s);
   
       // 获取工厂实例:
       static NumberFactory getFactory() {
           return impl;
       }
   
       static NumberFactory impl = new NumberFactoryImpl();
   }
   
   
   public class NumberFactoryImpl implements NumberFactory {
       public Number parse(String s) {
           return new BigDecimal(s);
       }
   }
   
   public interface Number{
       
   }
   public class BigDecimal implements Number{
       
   }
   
   
   //调用方
   NumberFactory factory = NumberFactory.getFactory();
   Number result = factory.parse("123.456");
   ```

   调用方可以完全忽略真正的工厂`NumberFactoryImpl`和实际的产品`BigDecimal`，这样做的好处是允许创建产品的代码独立地变换，而不会影响到调用方。

   **静态工厂模式**

   上面的抽象工厂的方法写的太复杂，实际上可以使用静态方法直接返回的方式创建

   ```
   public class NumberFactory {
       public static Number parse(String s) {
           return new BigDecimal(s);
       }
   }
   ```

   使用工厂方法的好处

   1. 隐藏创建产品的细节，而且可以不真正创建产品，而是使用缓存的实例，从而提升速度
   2. 调用方总是引用接口而不是实现类，允许变换子类而不影响调用方，使得尽可能面向抽象编程。

3. 抽象工厂模式

   ![](https://www.runoob.com/wp-content/uploads/2014/08/3E13CDD1-2CD2-4C66-BD33-DECBF172AE03.jpg)

4. 适配器模式：将多个接口融合到一起解决适配问题

   ![](https://www.runoob.com/wp-content/uploads/2014/08/20210223-adapter.png)

5. 建造者模式：使用多个简单的类构建一个复杂的类

   ![](https://www.runoob.com/wp-content/uploads/2014/08/20210315-builder-pattern.svg)

6. Proxy代理模式

   代理模式是将A接口进行封装，返回的依然是A接口，而适配器模式是将A接口转换成B接口。

   代理模式对接口进行的分装可以实现权限检查、延迟加载、和连接池复用等功能

   代理模式实现

   1. A接口：之定义接口
   2. ABusiness类：只实现A接口的业务逻辑
   3. APermissionProxy类：只实现A接口的权限检查代理

   代理模式的其他应用

   1. 远程代理Remote Proxy

      本地调用者持有的接口实际上是接口的代理，这个代理负责网络通信并把本地对接口的请求转换成远程调用。Java的RMI机制就是一个远程代理模式

   2. 虚代理Virtual Proxy

      本地持有代理对象，但真正的对象并没有创建，只有在使用时才会创建，实现延迟加载。JDBC的连接池返回的JDBC连接就可以是一个虚代理，也就是在获取连接时根本没有任何实际连接数据库，只有在第一次执行JDBC查询或者更新操作时才会创建JDBC连接

   3. 保护代理Protection Proxy

      代理类负责对代理对象的控制访问，常用于权限鉴定

   4. 智能引用Smart Proxy

      对代理对象添加计数器，实现没有对象持有他时释放这个对象。

   代理模式实现权限检查（事务，日志，权限管理）

   ```java
   public interface A{
   	public abstract Data getData(){
   	
   	}
   }
   public class AImpl{
       @Override
       public Data getData(){
           ...
       }
   }
   
   public class ASecurityProxy{
       A a ;
       public Data getData(){
           securityCheck() ;
           a.getData() ;
       }
       public securityCheck(){
           ...
       }
   }
   ```

   

   

# 后端开发套件

## 服务注册与发现、服务调用

### 相关框架

|   名称    | 提供者及目前状态 |                 定位                 |                             特性                             |
| :-------: | :--------------: | :----------------------------------: | :----------------------------------------------------------: |
|  Ribbon   |     Netflix      | IPC（Inter-Process Communication）库 | 负载均衡、容错、异步和响应式模型中支持多种协议（HTTP, TCP, UDP）、有caching和batching |
|   Feign   | Netflix（停更）  |   RPC（Remote Procedure Call）框架   | 消费端调用远程服务，简化http调用，内置Ribbon，不支持Spring MVC注解，基于http协议不适合高并发 |
| OpenFeign |      Spring      |                 同上                 |           Spring扩展版Feign，支持了Spring MVC注解            |
|   Dubbo   |     Alibaba      |                 同上                 |                 基于Netty，长连接适合高并发                  |
|  Eureka   | Netflix（停更）  |                                      |                                                              |
|   Nacos   |     Alibaba      |                                      |                                                              |

## 负载均衡Load Balance

将任务分摊到不同的工作单元

### 负载均衡策略

#### 基于随机的负载均衡

##### 完全随机

随机分配任务到一个工作单元

##### 加权随机

为不同服务器分配权重，权重大的优先分配任务

##### 改进加权随机

为服务器分配权重，生成一个随机数，便利权重，找到第一个比随机数大的分配

#### 基于轮询的负载均衡

##### 轮询Round Robin

将收到的请求循环分配到服务器，使用一个指针遍历所有服务器，收到一个请求将把指针加一

这个策略简单有效，但是因为每个机器性能不一，可能是性能差的超载

##### 加权轮询Weighted Round Robin

给每个机器分配权重，轮询分配如果超权重那么就移动到下一个

##### 平滑加权轮询

![](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/smoothed-weighted-round-robin.png)

#### 基于连接数的负载均衡

##### 最小连接数

连接数最小分配请求

##### 加权最小连接

加权连接说最小

##### 源IP哈希/一致性哈希

来自同一个客户端的请求分配到同一个服务器

#### 不同框架的负载均衡

1. RIbbon

   ```
   NFLoadBalancerRuleClassName: com.netflix.loadbalancer.RandomRule # 随机
   NFLoadBalancerRuleClassName: com.netflix.loadbalancer.RoundRobinRule # 轮询（默认）
   NFLoadBalancerRuleClassName: com.netflix.loadbalancer.RetryRule # 重试
   NFLoadBalancerRuleClassName: com.netflix.loadbalancer.WeightedResponseTimeRule # 加权响应时间
   NFLoadBalancerRuleClassName: com.netflix.loadbalancer.BestAvailableRule # 最小连接
   ```

2. Nacos

   ![](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/nacos-register-and-discovery.png)

### 服务注册与发现

#### 工作流程

微服务将自身注册到nacos服务注册列表，里面包含了微服务ID、微服务host、微服务port，心跳机制使用`@EnableScheduling`实现；有服务需要调用其他微服务时，使用OpenFeign的`@FeignClient`进行服务发现，使用Ribbon的`@LoadBalancer`进行负载均衡

# 数据库

## 索引

### 唯一索引和非唯一索引

唯一索引是这样一种索引，它通过确保表中没有两个数据行具有完全相同的键值来帮助维护数据完整性。

为包含数据的现有表创建唯一索引时，会检查组成索引键的列或表达式中的值是否唯一。如果该表包含具有重复键值的行，那么索引创建过程会失败。为表定义了唯一索引之后，每当在该索引内添加或更改键时就会强制执行唯一性。此强制执行包括插入、更新、装入、导入和设置完整性以命名一些键。除了强制数据值的唯一性以外，唯一索引还可用来提高查询处理期间检索数据的性能。

非唯一索引不用于对与它们关联的表强制执行约束。相反，非唯一索引通过维护频繁使用的数据值的排序顺序，仅仅用于提高查询性能。

### 聚集索引和非聚集索引（辅助索引）



## MySQL的存储引擎

MySQL 数据库提供了独有的插件式存储引擎，常见存储引擎有 **InnoDB**、**MyISAM**、NDB、Memory、Archive、Federated、Maria 等等，并且不同的存储引擎有着完全不同的功能，建表的时候可以指定存储引擎的类型，若不指定存储引擎类型，MySQL8.0 默认的存储引擎就是 InnoDB。

### InnoDB 存储引擎

InnoDB 存储引擎最大的特点是支持事务，它主要应用于事务（OLTP）相关的数据存储。它的功能特点有**行锁、支持外键**，并且一般操作查询不会产生锁。InnoDB 存储引擎从 MySLQ 5.5之后的版本都是其默认的存储引擎。
InnoDB 有多版本并发控制，并且有 4 种隔离级别，这种隔离级别分别为 **顺序读(SERIALIZABLE)、可重复读(REPEATABLE READ)、读已提交(READ COMMITTED)、读未提交(READ UNCOMMITTED)**。

#### InnoDB索引

InnoDB索引是一种聚集索引，他用B+树实现，他的叶节点不想MyISAM存储的是行记录的地址，他是一条行记录，InnoDB的数据文件本身就是按照B+树进行组织的索引结构，这个索引的Key是数据表的主键，因此InnoDB是一种主键索引。

![img](https://img-blog.csdn.net/20170307100611325?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvZG9uZ2hhaXhpYW9sb25nd2FuZw==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/Center)



### MyISAM 存储引擎

MyISAM 存储引擎是 MySQL 5.5 版本以前默认使用的存储引擎，其不支持事务，MyISAM 存储引擎表由 MYD 和 MYI 组成，其中 MYD 用来存放数据的文件，`MYI` 用来存放索引的文件。

#### MyISAM支持三种索引

1. B-Tree 索引

​	B-Tree 索引，顾名思义，就是所有的索引节点都按照 balance tree 的数据结构来存储，所有的索引数据节点都在叶节点。

2. R-Tree 索引

​	R-Tree 索引的存储方式和 b-tree 索引有一些区别，主要设计用于为存储空间和多维数据的字段做索引，所以对于目前的 MySQL 版本	来说，也仅支持 geometry 类型的字段作索引。

3. Full-text 索引

​	Full-text 索引就是全文索引，它的存储结构也是 b-tree。主要是为了解决需要用 like 查询时的低效问题。

​	MyISAM 上面三种索引类型中，最经常使用的就是 B-Tree 索引了，偶尔会使用到 Full-text，但是 R-Tree 索引一般系统中都是很少用到	的。另外 MyISAM 的 B-Tree 索引有一个较大的限制，那就是参与一个索引的所有字段的长度之和不能超过 1000 字节。

#### MyISAM优缺点

优点：

- 占用空间小
- 访问速度快，对事务完整性没有要求或以 SELECT、INSERT 为主的应用基本上都可以使用这个引擎来创建表
- 可以配合锁，实现操作系统下的复制备份
- 支持全文检索（InnoDB 在 MySQL 5.6 版本以后也支持全文检索）
- 数据紧凑存储，因此可获得更小的索引和更快的全表扫描性能。

缺点：

- 不支持事务的完整性和并发性
- 不支持行级锁，使用表级锁，并发性差
- 主机宕机后，MyISAM表易损坏，灾难恢复性不佳
- 数据库崩溃后无法安全恢复
- 只缓存索引，数据的缓存是利用操作系统缓冲区来实现的，可能会引发过多的系统调用，且效率不佳

#### MyISAM索引

MyISAM索引存储结构是B+树，他的叶节点存储的是行的引用，这是一种非聚集索引。它支持在有相同值的列上建立索引

![img](https://img-blog.csdn.net/20170307100553013?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQvZG9uZ2hhaXhpYW9sb25nd2FuZw==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/Center)

## 数据库并发控制

如何控制并发是数据库领域中非常重要的问题之一，不过到今天为止事务并发的控制已经有了很多成熟的解决方案，而这些方案的原理就是这篇文章想要介绍的内容，文章中会介绍最为常见的三种并发控制机制：

分别是悲观并发控制、乐观并发控制和多版本并发控制，其中悲观并发控制其实是最常见的并发控制机制，也就是锁；而乐观并发控制其实也有另一个名字：乐观锁，乐观锁其实并不是一种真实存在的锁，我们会在文章后面的部分中具体介绍；最后就是多版本并发控制（MVCC）了，与前两者对立的命名不同，MVCC 可以与前两者中的任意一种机制结合使用，以提高数据库的读性能。

### 悲观锁

互斥锁，最简单的、应用最广的方法就是使用锁来解决，当事务需要对资源进行操作时需要先获得资源对应的锁，保证其他事务不会访问该资源后，在对资源进行各种操作；在悲观并发控制中，数据库程序对于数据被修改持悲观的态度，在数据处理的过程中都会被锁定，以此来解决竞争的问题。

两阶段协议，产生死锁，死锁产生四个条件，死锁预防，死锁避免

### 乐观锁

#### 基于时间戳的协议

#### 基于验证的协议

### 多版本并发控制MVCC

到目前为止我们介绍的并发控制机制其实都是通过延迟或者终止相应的事务来解决事务之间的竞争条件（Race condition）来保证事务的可串行化；虽然前面的两种并发控制机制确实能够从根本上解决并发事务的可串行化的问题，但是在实际环境中数据库的事务大都是只读的，读请求是写请求的很多倍，如果写请求和读请求之前没有并发控制机制，那么最坏的情况也是读请求读到了已经写入的数据，这对很多应用完全是可以接受的。

**多版本并发控制（MVCC）** 是通过保存数据在某个时间点的快照来实现并发控制的。也就是说，不管事务执行多长时间，事务内部看到的数据是不受其它事务影响的，根据事务开始的时间不同，每个事务对同一张表，同一时刻看到的数据可能是不一样的。

简单来说，**多版本并发控制** 的思想就是保存数据的历史版本，通过对数据行的多个版本管理来实现数据库的并发控制。这样我们就可以通过比较版本号决定数据是否显示出来，读取数据的时候不需要加锁也可以保证事务的隔离效果。

可以认为 **多版本并发控制（MVCC）** 是行级锁的一个变种，但是它在很多情况下避免了加锁操作，因此开销更低。虽然实现机制有所不同，但大都实现了非阻塞的读操作，写操作也只锁定必要的行。

MySQL的大多数事务型存储引擎实现的都不是简单的行级锁。基于提升并发性能的考虑，它们一般都同时实现了多版本并发控制（MVCC）。不仅是MySQL，包括Oracle、PostgreSQL等其他数据库系统也都实现了MVCC，但各自的实现机制不尽相同，因为MVCC没有一个统一的实现标准，典型的有**乐观（optimistic）并发控制**和**悲观（pessimistic）并发控制**。

## 最左匹配原则

MySQL中的索引可以以一定顺序引用多列，这种索引叫作联合索引。如User表的name和city加联合索引就是(name,city)，**而最左前缀原则指的是，如果查询的时候查询条件精确匹配索引的左边连续一列或几列，则此列就可以被用到**。如下：

```
select * from user where name=xx and city=xx ; ／／可以命中索引
select * from user where name=xx ; // 可以命中索引
select * from user where city=xx ; // 无法命中索引            
```

 

这里需要注意的是，查询的时候如果两个条件都用上了，但是顺序不同，如 `city= xx and name ＝xx`，那么现在的**查询引擎会自动优化为匹配联合索引的顺序，这样是能够命中索引的**。

由于最左前缀原则，在创建联合索引时，索引字段的顺序需要考虑字段值去重之后的个数，较多的放前面。ORDER BY子句也遵循此规则。

### 什么是最左匹配原则

顾名思义：最左优先，以最左边的为起点任何连续的索引都能匹配上。同时遇到范围查询(>、<、between、like)就会停止匹配。
例如：如果建立(a,b)顺序的索引，我们的条件只有b=xxx，是匹配不到(a,b)索引的；但是如果查询条件是a = 1 and b = 2或者b=2 and a=1就可以，因为优化器会自动调整a,b的顺序，并不需要严格按照索引的顺序来；再比如a = 1 and b = 2 and c > 3 and d = 4 如果建立(a,b,c,d)顺序的索引，d是用不到索引的，因为c字段是一个范围查询，它之后的字段会停止匹配

### 为什么会形成最左匹配原则

首先要知道，最左匹配原则都是针对联合索引来说的，所以我们有必要了解一下联合索引的原理。了解了联合索引，那么为什么会有最左匹配原则这种说法也就理解了。

我们都知道索引的底层是一颗B+树，那么联合索引当然还是一颗B+树，只不过联合索引的健值数量不是一个，而是多个。构建一颗B+树只能根据一个值来构建，因此数据库依据联合索引最左的字段来构建B+树。
例子：假如创建一个（a,b)的联合索引，那么它的索引树是这样的

![在这里插入图片描述](https://img-blog.csdnimg.cn/20200910005504881.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80MzI2ODkzMw==,size_16,color_FFFFFF,t_70#pic_center)
可以看到a的值是有顺序的，1，1，2，2，3，3，而b的值是没有顺序的1，2，1，4，1，2。所以b = 2这种查询条件没有办法利用索引，因为联合索引首先是按a排序的，b是无序的。

同时我们还可以发现在a值相等的情况下，b值又是按顺序排列的，但是这种顺序是相对的。所以最左匹配原则遇上范围查询就会停止，剩下的字段都无法使用索引。例如a = 1 and b = 2 a,b字段都可以使用索引，因为在a值确定的情况下b是相对有序的，而a>1and b=2，a字段可以匹配上索引，但b值不可以，因为a的值是一个范围，在这个范围中b是无序的。

 **最左匹配原则** 

最左匹配原则就是指在联合索引中，如果你的 SQL 语句中用到了联合索引中的最左边的索引，那么这条 SQL 语句就可以利用这个联合索引去进行匹配。例如某表现有索引(a,b,c)，现在你有如下语句：

```javascript
select * from t where a=1 and b=1 and c =1;     #这样可以利用到定义的索引（a,b,c）,用上a,b,c

select * from t where a=1 and b=1;     #这样可以利用到定义的索引（a,b,c）,用上a,b

select * from t where b=1 and a=1;     #这样可以利用到定义的索引（a,b,c）,用上a,c（mysql有查询优化器）

select * from t where a=1;     #这样也可以利用到定义的索引（a,b,c）,用上a

select * from t where b=1 and c=1;     #这样不可以利用到定义的索引（a,b,c）

select * from t where a=1 and c=1;     #这样可以利用到定义的索引（a,b,c），但只用上a索引，b,c索引用不到
```

也就是说通过最左匹配原则你可以定义一个联合索引，但是使得多数查询条件都可以用到该索引。 值得注意的是，当遇到范围查询(>、<、between、like)就会停止匹配。也就是：

```javascript
select * from t where a=1 and b>1 and c =1; #这样a,b可以用到（a,b,c），c索引用不到
```

这条语句只有 a,b 会用到索引，c 都不能用到索引。这个原因可以从联合索引的结构来解释。

但是如果是建立(a,c,b)联合索引，则a,b,c都可以使用索引，因为优化器会自动改写为最优查询语句

```javascript
select * from t where a=1 and b >1 and c=1;  #如果是建立(a,c,b)联合索引，则a,b,c都可以使用索引
#优化器改写为
select * from t where a=1 and c=1 and b >1;
```

这也是最左前缀原理的一部分，索引index1:(a,b,c)，只会走a、a,b、a,b,c 三种类型的查询，其实这里说的有一点问题，a,c也走，但是只走a字段索引，不会走c字段。

```javascript
另外还有一个特殊情况说明下，select * from table where a = '1' and b > ‘2’ and c='3' 这种类型的也只会有 a与b 走索引，c不会走。
select * from table where a = '1' and b > ‘2’ and c='3'
```

这种类型的sql语句，在a、b走完索引后，c肯定是无序了，所以c就没法走索引，[数据库](https://cloud.tencent.com/solution/database?from=10680)会觉得还不如全表扫描c字段来的快。

以index （a,b,c）为例建立这样的索引相当于建立了索引a、ab、abc三个索引。一个索引顶三个索引当然是好事，毕竟每多一个索引，都会增加写操作的开销和磁盘空间的开销。

### 最左匹配原则的原理

最左匹配原则都是针对联合索引来说的，所以我们可以从联合索引的原理来了解最左匹配原则。

我们都知道索引的底层是一颗 B+ 树，那么联合索引当然还是一颗 B+ 树，只不过联合索引的键值数量不是一个，而是多个。构建一颗 B+ 树只能根据一个值来构建，因此数据库依据联合索引最左的字段来构建 B+ 树。例子：假如创建一个（a,b,c)的联合索引，那么它的索引树是这样的：

![img](https://ask.qcloudimg.com/http-save/yehe-1052551/g3h2lfrw60.png?imageView2/2/w/1620)

该图就是一个形如(a,b,c)联合索引的 b+ 树，其中的非叶子节点存储的是第一个关键字的索引 a，而叶子节点存储的是三个关键字的数据。这里可以看出 a 是有序的，而 b，c 都是无序的。但是当在 a 相同的时候，b 是有序的，b 相同的时候，c 又是有序的。通过对联合索引的结构的了解，那么就可以很好的了解为什么最左匹配原则中如果遇到范围查询就会停止了。以 select * from t where a=5 and b>0 and c =1; #这样a,b可以用到（a,b,c），c不可以 为例子，当查询到 b 的值以后（这是一个范围值），c 是无序的。所以就不能根据联合索引来确定到底该取哪一行。

### 总结

在 InnoDB 中联合索引只有先确定了前一个（左侧的值）后，才能确定下一个值。如果有范围查询的话，那么联合索引中使用范围查询的字段后的索引在该条 SQL 中都不会起作用。值得注意的是，in 和 = 都可以乱序，比如有索引（a,b,c），语句 select * from t where c =1 and a=1 and b=1，这样的语句也可以用到最左匹配，因为 [MySQL](https://cloud.tencent.com/product/cdb?from=10680) 中有一个优化器，他会分析 SQL 语句，将其优化成索引可以匹配的形式，即 select * from t where a =1 and a=1 and c=1

### 为什么要使用联合索引

- 1、减少开销。建一个联合索引(col1,col2,col3)，实际相当于建了(col1),(col1,col2),(col1,col2,col3)三个索引。每多一个索引，都会增加写操作的开销和磁盘空间的开销。对于大量数据的表，使用联合索引会大大的减少开销！
- 2、覆盖索引。对联合索引(col1,col2,col3)，如果有如下的sql: select col1,col2,col3 from test where col1=1 and col2=2。那么MySQL可以直接通过遍历索引取得数据，而无需回表，这减少了很多的随机io操作。减少io操作，特别的随机io其实是dba主要的优化策略。所以，在真正的实际应用中，覆盖索引是主要的提升性能的优化手段之一。
- 3、效率高。索引列越多，通过索引筛选出的数据越少。有1000W条数据的表，有如下sql:select from table where col1=1 and col2=2 and col3=3,假设假设每个条件可以筛选出10%的数据，如果只有单值索引，那么通过该索引能筛选出1000W10%=100w条数据，然后再回表从100w条数据中找到符合col2=2 and col3= 3的数据，然后再排序，再分页；如果是联合索引，通过索引筛选出1000w10% 10% *10%=1w，效率提升可想而知！

### **使用索引优化查询问题：** 

1、创建单列索引还是多列索引？如果查询语句中的where、order by、group 涉及多个字段，一般需要创建多列索引，比如：

```javascript
select * from user where nick_name = 'ligoudan' and job = 'dog';
```

- 2、多列索引的顺序如何选择？一般情况下，把选择性高的字段放在前面，比如：查询sql：

```javascript
select * from user where age = '20' and name = 'zh' order by nick_name;
```

这时候如果建索引的话，首字段应该是age，因为age定位到的数据更少，选择性更高。但是务必注意一点，满足了某个查询场景就可能导致另外一个查询场景更慢。

- 3、避免使用范围查询 很多情况下，范围查询都可能导致无法使用索引。
- 4、尽量避免查询不需要的数据

```javascript
explain select * from user where job like '%ligoudan%';
explain select job from user where job like '%ligoudan%';
```

同样的查询，不同的返回值，第二个就可以使用覆盖索引，第一个只能全表遍历了。

- 5、查询的数据类型要正确

```javascript
explain select * from user where create_date >= now();
explain select * from user where create_date >= '2020-05-01 00:00:00';
```

第一条语句就可以使用create_date的索引，第二个就不可以。

## 数据库设计原则

### 范式

1. 第一范式：字段原子性
2. 第二范式：消除对主键的部份依赖
3. 第三范式：消除对非主属性的依赖
4. BCNF范式：对于关系模式R，若 R为第一范式，且每个属性都不部分依赖于候选键也不传递依赖于候选键，则R称之为BC范式。

### 事务

#### 事务特性

1. 原子性：事务操作要么全部成功，要么势必回滚
2. 一致性：事务必须从提交前的一致状态转移到提交后的一致状态
3. 隔离性：并发事务不相互 干扰
4. 持久性：事务一旦提交，对数据库的改变是持久的，就算数据库故障也不丢失

#### 事务隔离级别

1. Read uncommitted

   A事务修改了数据但是没有写回，此时B事务读取了这个数据，B事务发生了脏数据

2. Read Commited（ SQLServer 和Oracle默认隔离级别）

   事务只能读到其他食物已经提交的数据（解决了脏读），但是A事务读的时候，另一个事务修改并提交，A事务再次读发现数据不一致，则第一个事务发生不可重复读

3. Repeated Read（MySQL默认隔离级别）

   一个事务获取一个数据时，其他事务不能修改这个数据（解决了脏读和不可重复读），但是如果第一个事务进行中，另一个事务增加或删除了数据，可能会影响第一个事务的数据，即第一个事务出现幻读

4. Serializable

   事务串行化按序执行，解决了脏读、不可重复读、幻读，但是不并行效率低

#### 解决幻读

MVCC模式：Multi-version concurrent control， 多版本并发控制。解决了保证数据一致性的前提下，提供高并发性能的需求，时MySQL解决默认隔离级别下幻读的方式

MVCC模式，类似COW，事务读取数据时创建数据拷贝，对数据修改在事务本地拷贝进行，对其他事务不可见，事务的提交不会覆盖原有的数据，而是产生多个历史版本数据，但是同一时刻只有最新版本有效

### 数据库优化

### 时间处理

```
DATE_FORMAT(<colName>, '%Y-%m-%d %H:%i:%s')
```

- 按小时取：

  ```
  SELECT DATE_FORMAT(<dateCol>, '%Y-%m-%d %H') as `hour`, COUNT(*)
  FROM <tableName>
  GROUP BY `hour`
  ```

- 按每隔一段时间（30min为例），使用`CONCAT()`构造出`GROUP BY`条件：

  ```
  SELECT
  	DATE_FORMAT(
  		CONCAT( DATE( <dateCol> ), ' ', HOUR ( <dateCol> ), ':', 
      	( FLOOR( MINUTE ( <dateCol> ) / 30 ) * 30 ) ),
  		'%Y-%m-%d %H:%i' 
  		) AS `min`,
      COUNT(*)
  FROM
  	<tableName>
  GROUP BY `min`
  ```

### 查询题目

1. 查询成绩前三的数据（tab）：

   | id   | name | score |
   | ---- | ---- | ----- |
   | 1    | a    | 100   |

   ```
   SELECT * FROM tab WHERE score IN(
   	SELECT score FROM(
       	SELECT DISTINCT score FROM t ORDER BY score DESC LIMIT 3
       ) as t
   )
   ```

### 聚集索引和非聚集索引

聚集索引是一个表只有一个，一般是主键索引；非聚集索引一般是非主键索引，用于频繁访问

## 数据库事务

数据库事务（transaction）时由多个SQL语句构成的操作序列，数据库系统要保证事务的所有语句要么全部执行成功，要么全部不执行。

### 数据库事务的特性ACID

**Atomicity 原子性**：一个事务中的SQL序列，要么全部执行，要么全部不执行，不会出现部分执行的情况，一旦出现错误，就会回滚，就像这个事务没有执行过一样

**Consistency 一致性**：事务结束前后，数据库的完整性没有被破坏，这表示写入的资料必须完全符合所有预设的规则，包括数据的精度、串联性以及后续数据库可以自发性的完成预定的工作。

**Isolation 隔离性**：防止多个事务并发执行时数据不一致。事务隔离级别包括读未提交、读已提交、可重复读、串行化

**Durabiliity 持久性**：事务结束后，对数据库的修改是永久的，即使系统故障也不会丢失。

### 数据库事务的隔离级别

[link](https://www.cnblogs.com/fengzheng/p/12557762.html)

| Isolation Level  | 脏读（Dirty Read） | 不可重复读（Non Repeatable Read） | 幻读（Phantom Read） |
| :--------------- | :----------------- | :-------------------------------- | :------------------- |
| Read Uncommitted | Yes                | Yes                               | Yes                  |
| Read Committed   | -                  | Yes                               | Yes                  |
| Repeatable Read  | -                  | -                                 | Yes                  |
| Serializable     | -                  | -                                 | -                    |

### JDBC实现事务

```java
Connection conn = openConnection();
try {
    // 关闭自动提交:
    conn.setAutoCommit(false);
    // 执行多条SQL语句:
    insert(); update(); delete();
    // 提交事务:
    conn.commit();
} catch (SQLException e) {
    // 回滚事务:
    conn.rollback();
} finally {
    conn.setAutoCommit(true);
    conn.close();
}
```

开启事务的关键代码时conn.setAutoCommit(false)，表示关闭自动提交，conn默认时执行一条SQL语句就提交一句。

设定事务的隔离级别

```java
conn.setTransactionIsolation(Connection.TRANSACTION_READ_COMMITTED);
```

如果没有设置事务的隔离级别，那么使用数据库的默认隔离级别，MySQL的默认隔离级别是REPEATABLE_READ

## MySQL

### MySQL Binlog

MySQL 的 Binlog 日志是一种二进制格式的日志，Binlog 记录所有的 DDL 和 DML 语句(除了数据查询语句SELECT、SHOW等)，以 Event 的形式记录，同时记录语句执行时间。

Binlog 的主要作用有两个：

1. 数据恢复

   因为 Binlog 详细记录了所有修改数据的 SQL，当某一时刻的数据误操作而导致出问题，或者数据库宕机数据丢失，那么可以根据 Binlog 来回放历史数据。

2. 主从复制

   想要做多机备份的业务，可以去监听当前写库的 Binlog 日志，同步写库的所有更改。

### MySQL主从复制

#### 主从复制框架

1. 一主一从 / 一主多从

2. 多主一从

3. 双主复制

4. 级联复制

   ![1](https://tva1.sinaimg.cn/large/007S8ZIlgy1gjx1mr6mxzj30z60hg40u.jpg)

#### 主从复制原理

MySQL 主从复制涉及到三个线程：

一个在主节点的线程：`log dump thread`

从库会生成两个线程：一个 I/O 线程，一个 SQL 线程

![4](https://tva1.sinaimg.cn/large/007S8ZIlgy1gjx1ms5ezhj312s0imtb5.jpg)

主库会生成一个 log dump 线程,用来给从库 I/O 线程传 Binlog 数据。

从库的 I/O 线程会去请求主库的 Binlog，并将得到的 Binlog 写到本地的 relay log (中继日志)文件中。

SQL 线程,会读取 relay log 文件中的日志，并解析成 SQL 语句逐一执行。

![5](https://tva1.sinaimg.cn/large/007S8ZIlgy1gjx1mvsnp5j31040iyad2.jpg)

#### 主从复制模式

##### 异步模式

主节点执行完客户端提交的食物后返回给客户端，不会关心从库是否已经接收并处理。这样造成的问题如果此时主节点崩了，主节点已经提交的事务可能没有传到从节点上，如果此时将从节点提升到主机节点，那么会造成新主节点数据缺失

![6](https://tva1.sinaimg.cn/large/007S8ZIlgy1gjx1mu02wbj31160kk0vj.jpg)

##### 半同步模式

主节点在执行完客户端事务后不会立即返回客户给客户端，而是等待至少一个从库接收并写道relay log中才返回成功信息给客户端（只能保证主库中的Binlog至少传输到一个从节点上），否则需要等到超时时间然后切换陈异步模式再提交。

![7](https://tva1.sinaimg.cn/large/007S8ZIlgy1gjx1muypwdj31420jg41q.jpg)

##### 全同步模式

主库执行完客户端事务后，等到全部从库都复制了这个事务并成功返回后才返回成功信息给客户端。这种设计要主库等到所有从库都复制了这个事务，会造成性能低。

# NOSQL

## Redis

- 包含数据类型：string字符串、hash散列、list列表、set集合、zset有序集合；
- 使用C语言编写，数据是基于内存的，支持持久化（重启也会重新加载到内存），单线程，默认无密码，不分用户；
- 默认端口号：**6379**；
- 默认**16**个Redis实例，可以修改配置文件修改。

### 缓存问题

#### 缓存穿透

- 问题：key在Redis中根本不存在，直接访问数据库；
- 解决：布隆过滤器，一定不存在的被拦截。

#### 缓存击穿

- 问题：某个经常被访问的key（热点数据）过期，产生大量数据库读取操作；
- 解决：使用互斥锁挡住后续请求，自身访问数据库并写会缓存，由于锁被挡住的请求自己进入等待；

#### 缓存雪崩

- 问题：大量key在同一时刻过期，请求全部转到数据库；
- 解决：使用锁或队列，保证单线程写/失效时间分散。

### Redis持久化

为了解决内存数据丢失，使用持久化功能**RDB** *Redis DataBase*和**AOF** *Append Only File*将数据保存到硬盘，重启Redis时把硬盘的数据重新加载到内存，在redis.confz中修改默认策略。

#### RDB（默认）

指定时间间隔内，Redis执行了一定次数的写操作，自动触发一次持久化操作。

- 默认RDB策略：**15min内1次**；**5min内10次**；**1min内10000次**；
- stop-writes-on-bgsave-error：快照操作出错时停止写入磁盘，保证内存与硬盘的数据一致性；
- rdbcompression：是否使用LZF算法进行压缩；
- rdbchecksum：存储快照后CRC64算法校验数据；
- dbfilename：RDB持久化的文件名，默认**dump.rbd**；
- dir：RDB持久化文件保存的目录，默认**./**。

#### AOF

为了避免RDB最后几次操作丢失，AOF使用操作日志记录Redis的每一次写操作，下次启动Redis时全部重新执行写操作。

- appendfilename：AOF持久化文件名；

- appendfsync：AOF异步持久化策略

  *always*：每次数据变化都立刻写入硬盘；

  *everysec*：默认，每秒记录1次；

  *no*：由操作系统决定。

- no-appendfsync-on-rewrite：重写时是否使用appendfsync，默认不使用；

### Redis事务（部分原子性）

`multi`开启事务队列，后续所有命令都进入这一事务队列，`exec`启动事务队列中的命令，`discard`清空事务队列并结束，`watch <key>`/`unwatch <key>`监控/放弃监控某个key来实现CAS。

- 原子性

  进入事务队列过程中的命令出错，所有队列命令不执行，满足原子性；

  进入事务队列过程没出错，执行过程出错，错误行受影响，不满足原子性；

### Redis淘汰策略

#### 定期删除

默认每隔100ms随机抽取设置过expire的key，如果过期就删除；之所以使用随机，是为了避免CPU负载。

#### 惰性删除

从来没有被定期删除的key，只有被查询过，知道key已过期，才会被删除。

#### 内存淘汰机制

为了解决定期删除+惰性删除造成内存被占用，在配置文件中声明maxmemory来限制内存使用量（0为无限制），当达到了maxmemory时，进行内存淘汰：

- no-eviction：写入报错，不会删除数据（Redis默认内存淘汰机制）；
- volatile-lru：过期的数据中LRU淘汰；
- volatile-lfu：过期的数据中最不经常使用的淘汰；
- volatile-random：过期的数据中任选淘汰；
- volatile-ttl：选择将要过期的淘汰；
- allkeys-lru：所有数据中LRU淘汰；
- allkeys-lfu：所有数据中LFU淘汰；
- allkeys-random：所有数据中随机淘汰。

### Redis集群

#### 主从复制

master进行写操作并复制到slave，slave进行读操作，读写分离；查看主从关系：`info replication`；master可以有多个slave，slave还可以有自己的slave，每次写操作都是自动同步的。

- 绑定

  slave执行命令`slaveof <master-host> <master-port>`即可绑定到master；

- 解绑

  `salveof no one`；

- master宕机/重启

  slave不受影响，可以继续读；

- slave宕机/重启

  重启后不再是slave，需要重新绑定到master。

#### 哨兵模式

监控master，master挂掉立刻找一个slave成为新master，新加入的自动成为master的slave：

1. 创建配置文件sentinel.conf：

   ```
   sentinel monitor <sentinel-name> <master-host> <master-port> <poll-num>
   ```

2. 启动哨兵监控：`redis-sentinel <sentinel-conf-file>`。

#### 集群

### Redis消息发布与订阅

- `subscribe <channel>`订阅一个`<channel>`或以上频道的信息；
- `publish <channel> <context>`发布消息`<context>`到指定频道`<channel>`。

### Redis数据类型

- string：默认最大512M，可以存储任何类型的数据（二进制、JSON、序列化数据等）；
- list：按插入顺序排序，底层为双向链表；
- set：无序不重复集合；
- hash：适合存储POJO；
- zset：根据分数排序的不重复集合。

### Redis相关命令

#### 服务相关

- 启动服务：`redis-server &`，关闭服务：`redis-cli shutdown`；
- 进入客户端：`redis-cli`（相当于`mysql`）;
- 切换数据库实例：`select <index>`，默认0～15；
- 数据库实例条目数：`dbsize`，数据库实例中全部key：`keys *`；
- 清空数据库实例：`flushdb`/`flushall`。

#### key相关

- 查找key：`keys <pattern>`，pattern可以用`*`代表0或多个字符，`?`代表1个字符，`[]`代表1个正则表达式字符；
- 删除key：`del <key>`，返回删除数量，多个key用空格分隔；
- 是否存在key：`exists <key>`，多个key用空格分隔；
- 查找key的类型：`type <key>`；
- 移动key的数据到其他数据库实例：`mv <key> <index>`；
- 重命名key：`rename <oldKey> <newKey>`；
- **设置生存时间**：`expire <key> <seconds>`；
- 剩余生存时间：`ttl <key>`，-1永久，-2不存在。

# 消息队列

## 消息队列概念

### 业务问题模型

无消息队列的方案：假设某个业务涉及到了支付、短信通知、邮件通知三个子业务，如果不使用消息队列，需要等待$(100+200+300)ms$；如果需要增加子业务，这个时间还会更长并且需要修改整体业务代码

[![img](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/purchase-without-message-queue.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/purchase-without-message-queue.png)

使用消息队列：主业务完成后，不着急的任务可以放在消息队列之后慢慢处理，全部业务完成虽然仍需$(100+200+300)ms$，但在这个过程中下单业务完成后用户可以进行其他操作（后续操作就成了异步操作），如果需要增加子业务可以增加到消息队列之后成为子项目（业务解耦），最耗时或浪费资源的任务可以后面慢慢处理（高并发情况下系统不崩，削峰）

[![purchase-with-message-queue](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/purchase-with-message-queue.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/purchase-with-message-queue.png)

## 消息队列好处

- 异步
- 解耦
- 削峰

## Kafka

分布式的基于发布/订阅模式的消息队列。

### 

## RabbitMQ

### 使用docker安装

1. 新建*docker-compose.yml*文件并写入以下内容

   ```
   rabbitmq:
     image: rabbitmq:management
     ports:
       - "5672:5672"
       - "15672:15672"
   ```

2. 在同级目录下的terminal中运行命令`docker-compose up`

3. 在本地terminal中运行命令`docker exec -it <imageId> bash`进入RabbitMQ的terminal

4. 添加用户命令：`rabbitmqctl add_user <username> <password>`（默认用户账号名与密码为*guest*）

5. 添加管理员权限：`rabbitmqctl set_user_tags <username> administrator`

6. 浏览器URL：[http://localhost:15672，查看RabbitMQ相关情况](http://localhost:15672，查看RabbitMQ相关情况/)

[![rabbitmq-setup](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/rabbitmq-setup.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/rabbitmq-setup.png)

### AMQP模型 *Advanced Message Queue Protocol*

[![img](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/amqp.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/amqp.png)

1. Publisher：消息生产者；
2. Exchange：交换器，接受生产者的消息并路由到服务器的队列中（类似于路由器）；
3. Binding：将消息队列和交换器关联起来的操作，基于路由规则绑定（类似于路由表）；
4. Queue：消息队列本体，保存消息到发送给消费者；
5. Connection：网络连接，如TCP连接；
6. Channel：信道，多路复用连接中的双向通道，建立在TCP上的虚拟连接；
7. Consumer：消息消费者；
8. Virtual Host：虚拟主机，表示一批交换器和消息队列（类似于文件夹，存放了交换器和消息队列文件）；
9. Broker：消息队列服务器实体（由多个文件夹构成的文件系统）。

### Exchange的类型

1. direct 单播模式（默认模式）

   生产者提供的消息包含`routing-key`，Exchange根据`routing-key`将消息发送到对应相同`binding-key`的队列；如果没有对应的`binding-key`，消息将丢失；

   [![exchange delivering messages to  queues based on routing key](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/exchange-direct.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/exchange-direct.png)

2. fanout 多播模式

   将消息发送到所有绑定的队列中，不涉及到`routing-key`所以很快；如果后加入的队列，收不到前面发送过的消息；

   [![exchange delivering messages to three queues](https://github.com/AlbertoWang/java-noob/raw/master/%E5%90%8E%E7%AB%AF%E5%BC%80%E5%8F%91%E7%9B%B8%E5%85%B3%E7%BB%84%E4%BB%B6.assets/exchange-fanout.png)](https://github.com/AlbertoWang/java-noob/blob/master/后端开发相关组件.assets/exchange-fanout.png)

3. topic 订阅模式

   Exchange根据`routing-key`将消息发送到满足`binding-key`的队列；匹配规则：在绑定队列时，`binding-key`的值格式为`aa.bb.cc...`，则`aa.*`只能匹配到`aa.xx`（仅仅下一级）；`aa.#`可以匹配到`aa`、`aa.xx`或`aa.xx.yy`等（下面多级）。

### 事务管理

#### 生产者端

RabbitMQ中的事务是在Channel中的，通过`channel.txSelect()`开启事务，并需要使用`channel.txCommit()`提交，在错误处理中调用`channel.txRollback()`进行回滚并`channel.close()`释放内存。

#### 消费者端



# 数据结构

## 线性表、树形结构和图形结构的区别
线性表：数据元素之间仅有线性关系，每个数据元素只有一个直接前驱和一个直接后继

树形结构：数据元素之间有明显的层次关系，并且每一层上的数据元素可能和下一层中多个元素（即其孩子结点）相关，但只能和上一层中一个元素（即其双亲结点）相关

图形结构：结点之间的关系可以是任意的，图中任意两个数据元素之间都可能相关


## 哈希表-解决哈希冲突方式

1. 开放定址法：
   1. 线性探查：从冲突位置后面找到一个空位置
   2. 二次探查：以一定步长左右探查（-1，1，-2，2）
   3. 随机数探查：生成随机步长探查
2. 再哈希法：使用多个哈希函数，一个冲突就用另外一个哈希函数生成哈希值
3. 链地址法：对哈希值开辟一个链表，如果冲突就添加到链表中
4. 建立公共溢出表：将哈希表分为基本表和溢出表，如果冲突，就将冲突数据放到溢出表。查找时候，如果基本表找到就返回，否则在溢出表顺序找。这种方式在数据冲突少的时候好用。

## 堆

堆的向上调整和向下调整

## 快速排序

# 计算机网络模型概述

## NIO和IO

**一、概念**

   NIO即New IO，这个库是在JDK1.4中才引入的。NIO和IO有相同的作用和目的，但实现方式不同，NIO主要用到的是块，所以NIO的效率要比IO高很多。在Java API中提供了两套NIO，一套是针对标准输入输出NIO，另一套就是网络编程NIO。

**二、NIO和IO的主要区别**

下表总结了Java IO和NIO之间的主要区别：

| **IO** | **NIO**  |
| ------ | -------- |
| 面向流 | 面向缓冲 |
| 阻塞IO | 非阻塞IO |
| 无     | 选择器   |

**1、面向流与面向缓冲**

   Java IO和NIO之间第一个最大的区别是，IO是面向流的，NIO是面向缓冲区的。 Java IO面向流意味着每次从流中读一个或多个字节，直至读取所有字节，它们没有被缓存在任何地方。此外，它不能前后移动流中的数据。如果需要前后移动从流中读取的数据，需要先将它缓存到一个缓冲区。 Java NIO的缓冲导向方法略有不同。数据读取到一个它稍后处理的缓冲区，需要时可在缓冲区中前后移动。这就增加了处理过程中的灵活性。但是，还需要检查是否该缓冲区中包含所有您需要处理的数据。而且，需确保当更多的数据读入缓冲区时，不要覆盖缓冲区里尚未处理的数据。

**2、阻塞与非阻塞IO**

   Java IO的各种流是阻塞的。这意味着，当一个线程调用read() 或 write()时，该线程被阻塞，直到有一些数据被读取，或数据完全写入。该线程在此期间不能再干任何事情了。Java NIO的非阻塞模式，使一个线程从某通道发送请求读取数据，但是它仅能得到目前可用的数据，如果目前没有数据可用时，就什么都不会获取，而不是保持线程阻塞，所以直至数据变的可以读取之前，该线程可以继续做其他的事情。 非阻塞写也是如此。一个线程请求写入一些数据到某通道，但不需要等待它完全写入，这个线程同时可以去做别的事情。 线程通常将非阻塞IO的空闲时间用于在其它通道上执行IO操作，所以一个单独的线程现在可以管理多个输入和输出通道（channel）。

**3、选择器（Selectors）**

   Java NIO的选择器允许一个单独的线程来监视多个输入通道，你可以注册多个通道使用一个选择器，然后使用一个单独的线程来“选择”通道：这些通道里已经有可以处理的输入，或者选择已准备写入的通道。这种选择机制，使得一个单独的线程很容易来管理多个通道。

**四、总结**

NIO可让您只使用一个（或几个）单线程管理多个通道（网络连接或文件），但付出的代价是解析数据可能会比从一个阻塞流中读取数据更复杂。

如果需要管理同时打开的成千上万个连接，这些连接每次只是发送少量的数据，例如聊天服务器，实现NIO的服务器可能是一个优势。同样，如果你需要维持许多打开的连接到其他计算机上，如P2P网络中，使用一个单独的线程来管理你所有出站连接，可能是一个优势。一个线程多个连接的设计方案如下图所示：

![img](https://images2015.cnblogs.com/blog/249993/201703/249993-20170321110623815-613575568.png)

**Java NIO: 单线程管理多个连接**

如果你有少量的连接使用非常高的带宽，一次发送大量的数据，也许典型的IO服务器实现可能非常契合。下图说明了一个典型的IO服务器设计：

![img](https://images2015.cnblogs.com/blog/249993/201703/249993-20170321110840033-1588623537.png)

**Java IO: 一个典型的IO服务器设计- 一个连接通过一个线程处理.**



## 计算机OSI模型、各层数据、各层协议图：

[![osi-model](https://github.com/AlbertoWang/java-noob/raw/master/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%BD%91%E7%BB%9C.assets/osi-model.png)](https://github.com/AlbertoWang/java-noob/blob/master/计算机网络.assets/osi-model.png)

## 各层协议简述

### 网络层

#### ARP：地址解析协议 *Address Resolution Protocol*

根据IP地址获取MAC地址。

#### RARP： 反向地址转换协议 *Reverse Address Resolution Protocol*

根据MAC地址获取IP地址。

#### ICMP：控制报文协议 *Internet Control Message Protocol*

主机、路由器之间传递控制消息，由IP提供服务。

#### IGMP：组管理协议 *Internet Group Management Protocol*

主机、组播路由器之间传递分组消息，由IP提供服务。

### 传输层

#### TCP：传输控制协议 *Transmission Control Protocol*

- 面向连接，可靠通信；
- 一对一；
- 头大（20字节）；
- 有流量、拥塞控制；
- 面向字节流。

#### UDP：用户数据报协议 *User Datagram Protocol*

- 无连接，快速；
- 一对一，一对多，多对多；
- 头小（8字节）；
- 网络拥堵不影响发送速率；
- 面向报文。

### 应用层

#### HTTP：超文本传输协议 *Hypertext Transfer Protocol*

基于Client/Server模式，面向连接。

#### DNS：域名系统 *Domain Name System*

将域名与IP一一映射的数据库。

#### DHCP：动态主机配置协议 *Dynamic Host Configuration Protocol*

自动获得分配的IP与子网掩码。

## 常考试题

### 传输层

#### TCP建立连接与断开连接

#### 建立连接：三次握手

[![handshake](https://github.com/AlbertoWang/java-noob/raw/master/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%BD%91%E7%BB%9C.assets/handshake.png)](https://github.com/AlbertoWang/java-noob/blob/master/计算机网络.assets/handshake.png)

1. Client发起建立连接请求`[SYN]`，序列号`seq=x`，发送完进入`SYN_SEND`状态；
2. Server收到请求后，发送对应`ack=x+1`的应答`[ACK]`与`seq=y`的建立连接请求`[SYN]`，发送完进入`SYN_RCVD`状态；
3. Client收到请求后，发送对应`ack=y+1`的应答`[ACK]`并进入`ESTABLISHED`状态；
4. Server收到请求后，进入`ESTABLISHED`状态，TCP连接建立完成。

#### 断开连接：四次挥手

[![handwave](https://github.com/AlbertoWang/java-noob/raw/master/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%BD%91%E7%BB%9C.assets/handwave.png)](https://github.com/AlbertoWang/java-noob/blob/master/计算机网络.assets/handwave.png)

1. Client发送断开连接请求`[FIN]`，序列号`seq=x`，发送完进入`FIN_WAI_1T`状态；
2. Server收到请求后，发送对应`ack=x+1`的应答`[ACK]`，发送完进入`CLOSE_WAIT_1`状态，等待之前连接中传输中的数据传输完成；
3. Client收到请求后，进入`FIN_WAIT_2`状态，等待服务器发送关闭连接的请求；
4. Server传输完数据打算关闭连接时，发送断开连接请求`[FIN]`，序列号`seq=y`，发送完进入`LAST_ACK`状态等待Client的通知；
5. Client收到请求后，发送对应`ack=y+1`的应答`[ACK]`，发送完进入`TIME_WAIT`状态，等待Server可能继续发送的数据；
6. Server收到请求后，关闭连接并进入`CLOSED`状态；
7. Client在等待固定时间后，如果没收到Server的其他数据，说明Server已成功关闭连接，自己也进入`CLOSED`状态。

### 应用层

#### HTTP数据包内容

具体的header可见[这里](https://www.runoob.com/http/http-header-fields.html)，具体的状态码可见[这里](https://www.runoob.com/http/http-status-codes.html)。

#### 请求报文

1. 请求方法method：GET、POST、DELETE、UPDATE等；
2. URL；
3. 协议版本：HTTP/1.0、HTTP/1.1；
4. 头部字段header：Content-Type （请求与实体对应的MIME信息）、Authorization（HTTP授权证书）、Connection（是否保持长连接）等；
5. 请求正文：POST请求中的body部分。

#### 响应报文

1. 协议版本；
2. 状态码：200、500、404、403等；
3. 响应正文：请求的body部分。

### 浏览器收到URL到展示页面的过程

1. DNS域名解析获取IP地址；
2. 建立TCP连接；
3. 发送HTTP请求；
4. Server处理请求并返回HTTP报文；
5. 浏览器解析渲染页面。

### DNS域名解析过程

[![img](https://github.com/AlbertoWang/java-noob/raw/master/%E8%AE%A1%E7%AE%97%E6%9C%BA%E7%BD%91%E7%BB%9C.assets/dns.png)](https://github.com/AlbertoWang/java-noob/blob/master/计算机网络.assets/dns.png)

左图为迭代查询（查找过程全靠本地DNS跑腿），右图为递归查询（所有服务器都要跑腿）。

#### 迭代查询

1. 查询本地DNS服务器，找到了就直接返回缓存记录；
2. 本地DNS服务器找不到，找根服务器；
3. 根服务器返回域名归属.com，本地DNS服务器继续找.com服务器；
4. .com服务器返回返回域名归属baidu.com，找baidu.com服务器；
5. baidu.com服务器返回真实IP地址给本地DNS服务器。

#### 递归查询

1. 查询本地DNS服务器，找到了就直接返回缓存记录；
2. 本地DNS服务器找不到，找根服务器；
3. 根服务器找域名归属的.com服务器；
4. .com服务器找域名归属的baidu.com服务器；
5. baidu.com服务器返回真实IP地址给.com服务器，再一级一级递归返回。

### HTTP协议与HTTPS协议

- HTTPS协议需要申请证书（由数字证书认证机构CA颁发），不能在同一IP地址上绑定多个域名；
- HTTPS工作流程：
  1. 建立TCP连接；
  2. Client验证Server的数字证书；
  3. 协商加密算法、密钥；
  4. SSL安全加密隧道协商完成；
  5. 网页以加密方式传输，对称加密保证加密，hash算法保证不被篡改数据。

|        | HTTP                       | HTTPS                                 |
| ------ | -------------------------- | ------------------------------------- |
| 安全性 | 明文传输                   | 对称加密+hash                         |
| 速度   | 快，只有TCP建立连接的3个包 | 慢，除了TCP连接包外还有SSL握手的9个包 |
| 端口   | 80                         | 443                                   |

### 反向代理 *Reverse Proxy*

- 含义

  反向代理是指使用代理服务器接受请求，并将该请求转发给内部服务器，并将内部服务器的结果返回给发起请求的客户端，代理服务器对外表现为一台服务器。

- 负载均衡

  将外部请求动态转发给内部服务器达到负载均衡的目的。

- 缺点

  代理服务器需要建立两个连接（对外客户端和对内服务器），可能会成为瓶颈。

### GET 与 POST



|          | GET                        | POST                       |
| -------- | -------------------------- | -------------------------- |
| 数据位置 | 放在HTTP协议头（URL）      | 放在HTTP包（Request Body） |
| 数据大小 | 2KB                        | 理论无限，80～100KB        |
| 数据类型 | 仅限ASCII                  | 无限制                     |
| TCP报文  | 发送一个，请求和数据在一起 | 发送两个，先请求后数据     |
| 回退情况 | 无害                       | 再次提交请求               |
|          |                            |                            |

## TCP流量控制

可变滑动窗口

## TCP拥塞控制

快重传

快恢复

慢启动

# 操作系统

## 线程同步相关

### `synchronized`底层实现

同步代码块使用了底层原语的monitorenter和monitorexit，同步方法使用ACC_SYNCHRONIZED。

每个对象拥有一个monitor，monitor只能被一个线程拥有（monitor的进入数为0则可进，进入后变为1，monitor进入数为1则不允许其他线程进入），是可重入的；其他线程申请进入monitor只能等待进入数变为0；

拥有monitor的线程才可以执行monitorexit，进入数会-1，降到0时释放monitor（以上过程与[AQS](https://zhuanlan.zhihu.com/p/86072774)类似）

### `synchronized`锁升级

JDK1.6之后对`synchronized`进行了优化，锁可以逐步升级（无锁 -> 偏向锁 -> 轻量级锁 -> 重量级锁）：

- 偏向锁：适用于单线程，如果发生抢占则持有锁的线程被挂起，并升级为轻量级锁；
- 轻量级锁：不会阻塞，执行速度快，但得不到锁单线程进行自旋耗费CPU，CAS过程；
- 重量级锁：阻塞，执行时间长，但不会消耗CPU，AQS过程。

### `synchronized`与`static synchronized`

`synchronized`（对象锁）管理的是某个类的一个对象，同一个类的两个对象没办法管理，作用域是`this.synchronized`；

`static synchronized`（类锁）管理的是某个类所有的对象，作用域是`clazz.synchronized`。



###  HashMap`、`ConcurrentHashMap`与`Hashtable

#### 基本数据结构

- 底层数据结构：`HashMap`与`ConcurrentHashMap`底层数据结构相似（数组+链表+红黑树），`Hashtable`没有红黑树；
- 线程安全：`Hashtable`的`synchronized`修饰在方法，是对象级的加锁，同一时间只有一个线程能对数据进行操作，`ConcurrentHashMap`使用了修饰具体对象的`synchronized`（锁一个桶）和CAS机制，实现了更细粒度的锁；
- 地址计算：`HashMap`使用`key.hashCode() ^ (key.hashCode() >>> 16)`、`Hashtable`使用`(key.hashCode() & 0x7fffffff) % tab.length()`、`ConcurrentHashMap`使用`(key.hashCode() ^ (key.hashCode() >>> 16)) & 0x7fffffff`。

#### key类的重写`equals()`和`hashCode()`方法

只重写了其中之一，会造成相等的key对象存在两个的问题：

- 重写了`hashCode()`但没重写`equals()`方法：`equals()`比较两个对象的地址，只要不是同一个对象必为`false`，因此相等的两个key发生哈希碰撞后不会覆盖，而是存在两个相等的key；
- 重写了`equals()`但没重写`hashCode()`方法：两个相等的对象可能算出来的哈希值不同，因此被安放在了两个不同的桶中，造成相等对象存在两个的问题。

## `ThreadLocal`相关

### `ThreadLocal`造成内存泄漏

`ThreadLocalMap`的key为**弱引用**（有用但非必需，下一次GC会被回收），value为**强引用**（GC过程不会被回收），有可能造成key被GC，value没被GC，`ThreadLocalMap`中出现`null`为key的`Entry`，产生内存泄漏（软引用：有用但非必需，内存溢出之前被回收）；

解决方式：调用`set()`、`get()`和`remove()`方法时，会清理掉key为`null`的记录，使用`ThreadLocal`方法后手动`remove()`。

## 线程

先来看看什么是进程和线程？

进程是资源（CPU、内存等）分配的基本单位，它是程序执行时的一个实例。程序运行时系统就会创建一个进程，并为它分配资源，然后把该进程放入进程就绪队列，进程调度器选中它的时候就会为它分配CPU时间，程序开始真正运行。就比如说，我们开发的一个单体项目，运行它，就会产生一个进程。

线程是程序执行时的最小单位，它是进程的一个执行流，是CPU调度和分派的基本单位，一个进程可以由很多个线程组成，线程间共享进程的所有资源，每个线程有自己的堆栈和局部变量。线程由CPU独立调度执行，在多CPU环境下就允许多个线程同时运行。同样多线程也可以实现并发操作，每个请求分配一个线程来处理。在这里强调一点就是：计算机中的线程和应用程序中的线程不是同一个概念。

总之一句话描述就是：进程是资源分配的最小单位，线程是程序执行的最小单位。

### 什么是线程安全

并发多线程访问同一个对象的执行结果和串行执行他们的一样，这个并发访问就是线程安全的。

什么是线程安全呢？什么样的情况会造成线程安全问题呢？怎么解决线程安全呢？这些问题都是在下文中所要讲述的。

**线程安全：**当多个线程访问一个对象时，如果不用考虑这些线程在运行时环境下的调度和交替执行，也不需要进行额外的同步，或者在调用方进行任何其他的协调操作，调用这个对象的行为都可以获得正确的结果，那这个对象就是线程安全的。

那什么时候会造成线程安全问题呢？当多个线程同时去访问一个对象时，就可能会出现线程安全问题。那么怎么解决呢？请往下看！

### 解决线程安全

在这里提供4种方法来解决线程安全问题，也是最常用的4种方法。前提是项目在一个服务器中，如果是分布式项目可能就会用到分布锁了，这个就放到后面文章来详谈了。

讲4种方法前，还是先来了解一下悲观锁和乐观锁吧！

悲观锁，顾名思义它是悲观的。讲得通俗点就是，认为自己在使用数据的时候，一定有别的线程来修改数据，因此在获取数据的时候先加锁，确保数据不会被线程修改。形象理解就是总觉得有刁民想害朕。

而乐观锁就比较乐观了，认为在使用数据时，不会有别的线程来修改数据，就不会加锁，只是在更新数据的时候去判断之前有没有别的线程来更新了数据。具体用法在下面讲解。

现在来看有那4种方法吧！

- 方法一：使用synchronized关键字，一个表现为原生语法层面的互斥锁，它是一种悲观锁，使用它的时候我们一般需要一个监听对象 并且监听对象必须是唯一的，通常就是当前类的字节码对象。它是JVM级别的，不会造成死锁的情况。使用synchronized可以拿来修饰类，静态方法，普通方法和代码块。比如：Hashtable类就是使用synchronized来修饰方法的。put方法部分源码：

  ```java
   public synchronized V put(K key, V value) {
          // Make sure the value is not null
          if (value == null) {
              throw new NullPointerException();
          } 
  
   
  ```

  而ConcurrentHashMap类中就是使用synchronized来锁代码块的。putVal方法部分源码：

  ```java
   else {
                  V oldVal = null;
                  synchronized (f) {
                      if (tabAt(tab, i) == f) {
                          if (fh >= 0) {
                              binCount = 1;
  ```

  synchronized关键字底层实现主要是通过monitorenter 与monitorexit计数 ，如果计数器不为0，说明资源被占用，其他线程就不能访问了，但是可重入的除外。说到这，就来讲讲什么是可重入的。这里其实就是指的可重入锁：指的是同一线程外层函数获得锁之后，内层递归函数仍然有获取该锁的代码，但不受影响，执行对象中所有同步方法不用再次获得锁。避免了频繁的持有释放操作，这样既提升了效率，又避免了死锁。

  其实在使用synchronized时，存在一个锁升级原理。它是指在锁对象的对象头里面有一个 threadid 字段，在第一次访问的时候 threadid 为空，jvm 让其持有偏向锁，并将 threadid 设置为其线程 id，再次进入的时候会先判断 threadid 是否与其线程 id 一致，如果一致则可以直接使用此对象，如果不一致，则升级偏向锁为轻量级锁，通过自旋循环一定次数来获取锁，执行一定次数之后，如果还没有正常获取到要使用的对象，此时就会把锁从轻量级升级为重量级锁，此过程就构成了 synchronized 锁的升级。锁升级的目的是为了减低了锁带来的性能消耗。在 Java 6 之后优化 synchronized 的实现方式，使用了偏向锁升级为轻量级锁再升级到重量级锁的方式，从而减低了锁带来的性能消耗。可能你又会问什么是偏向锁？什么是轻量级锁？什么是重量级锁？这里就简单描述一下吧，能够帮你更好的理解synchronized。

  偏向锁（无锁）：大多数情况下锁不仅不存在多线程竞争，而且总是由同一线程多次获得。偏向锁的目的是在某个线程获得锁之后（线程的id会记录在对象的Mark Word中），消除这个线程锁重入（CAS）的开销，看起来让这个线程得到了偏护。

  轻量级锁（CAS）：就是由偏向锁升级来的，偏向锁运行在一个线程进入同步块的情况下，当第二个线程加入锁争用的时候，偏向锁就会升级为轻量级锁；轻量级锁的意图是在没有多线程竞争的情况下，通过CAS操作尝试将MarkWord更新为指向LockRecord的指针，减少了使用重量级锁的系统互斥量产生的性能消耗。

  重量级锁：虚拟机使用CAS操作尝试将MarkWord更新为指向LockRecord的指针，如果更新成功表示线程就拥有该对象的锁；如果失败，会检查MarkWord是否指向当前线程的栈帧，如果是，表示当前线程已经拥有这个锁；如果不是，说明这个锁被其他线程抢占，此时膨胀为重量级锁。

- 方法二：使用Lock接口下的实现类。Lock是juc（java.util.concurrent）包下面的一个接口。常用的实现类就是ReentrantLock 类，它其实也是一种悲观锁。一种表现为 API 层面的互斥锁。通过lock() 和 unlock() 方法配合使用。因此也可以说是一种手动锁，使用比较灵活。但是使用这个锁时一定要注意要释放锁，不然就会造成死锁。一般配合try/finally 语句块来完成。比如：

  ```java
  public class TicketThreadSafe extends Thread{
        private static int num = 5000;
        ReentrantLock lock = new ReentrantLock();
        @Override
        public void run() {
          while(num>0){
               try {
                 lock.lock();
                 if(num>0){
                   System.out.println(Thread.currentThread().getName()+"你的票号是"+num--);
                 }
                } catch (Exception e) {
                   e.printStackTrace();
                }finally {
                   lock.unlock();
                }
              }
        }
  }
  
    
  ```

  相比 synchronized，ReentrantLock 增加了一些高级功能，主要有以下 3 项：等待可中断、可实现公平锁，以及锁可以绑定多个条件。

  等待可中断是指：当持有锁的线程长期不释放锁的时候，正在等待的线程可以选择放弃等待，改为处理其他事情，可中断特性对处理执行时间非常长的同步块很有帮助。

  公平锁是指：多个线程在等待同一个锁时，必须按照申请锁的时间顺序来依次获得锁；而非公平锁则不保证这一点，在锁被释放时，任何一个等待锁的线程都有机会获得锁。synchronized 中的锁是非公平的，ReentrantLock 默认情况下也是非公平的，但可以通过带布尔值的构造函数要求使用公平锁。

  ```java
  public ReentrantLock(boolean fair) {
          sync = fair ? new FairSync() : new NonfairSync();
      }
  ```

  锁绑定多个条件是指：一个 ReentrantLock 对象可以同时绑定多个 Condition 对象，而在 synchronized 中，锁对象的 wait() 和 notify() 或 notifyAll() 方法可以实现一个隐含的条件，如果要和多于一个的条件关联的时候，就不得不额外地添加一个锁，而 ReentrantLock 则无须这样做，只需要多次调用 newCondition() 方法即可。

  ```java
  final ConditionObject newCondition() { //ConditionObject是Condition的实现类
              return new ConditionObject();
      } 
  
    
  ```

- 方法三：使用线程本地存储ThreadLocal。当多个线程操作同一个变量且互不干扰的场景下，可以使用ThreadLocal来解决。它会在每个线程中对该变量创建一个副本，即每个线程内部都会有一个该变量，且在线程内部任何地方都可以使用，线程之间互不影响，这样一来就不存在线程安全问题，也不会严重影响程序执行性能。在很多情况下，ThreadLocal比直接使用synchronized同步机制解决线程安全问题更简单，更方便，且结果程序拥有更高的并发性。通过set(T value)方法给线程的局部变量设置值；get()获取线程局部变量中的值。当给线程绑定一个 Object 内容后，只要线程不变,就可以随时取出；改变线程,就无法取出内容.。这里提供一个用法示例：

  ```java
  public class ThreadLocalTest {
        private static int a = 500;
        public static void main(String[] args) {
              new Thread(()->{
                    ThreadLocal<Integer> local = new ThreadLocal<Integer>();
                    while(true){
                          local.set(++a);   //子线程对a的操作不会影响主线程中的a
                          try {
                                Thread.sleep(1000);
                          } catch (InterruptedException e) {
                                e.printStackTrace();
                          }
                          System.out.println("子线程："+local.get());
                    }
              }).start();
              a = 22;
              ThreadLocal<Integer> local = new ThreadLocal<Integer>();
              local.set(a);
              while(true){
                    try {
                          Thread.sleep(1000);
                    } catch (InterruptedException e) {
                          e.printStackTrace();
                    }
                    System.out.println("主线程："+local.get());
              }
        }
  } 
  
   
  ```

  ThreadLocal线程容器保存变量时，底层其实是通过ThreadLocalMap来实现的。它是以当前ThreadLocal变量为key ，要存的变量为value。获取的时候就是以当前ThreadLocal变量去找到对应的key，然后获取到对应的值。源码参考如下：

  ```java
   public void set(T value) {
          Thread t = Thread.currentThread();
          ThreadLocalMap map = getMap(t);
          if (map != null)
              map.set(this, value);
          else
              createMap(t, value);
      }
       ThreadLocalMap getMap(Thread t) {
          return t.threadLocals; //ThreadLocal.ThreadLocalMap threadLocals = null;Thread类中声明的
      }
      void createMap(Thread t, T firstValue) {
          t.threadLocals = new ThreadLocalMap(this, firstValue);
      }
  ```

  观察源码就会发现，其实每个线程Thread内部有一个ThreadLocal.ThreadLocalMap类型的成员变量threadLocals，这个threadLocals就是用来存储实际的变量副本的，键值为当前ThreadLocal变量，value为变量副本（即T类型的变量）。

  初始时，在Thread里面，threadLocals为空，当通过ThreadLocal变量调用get()方法或者set()方法，就会对Thread类中的threadLocals进行初始化，并且以当前ThreadLocal变量为键值，以ThreadLocal要保存的副本变量为value，存到threadLocals。

  然后在当前线程里面，如果要使用副本变量，就可以通过get方法在threadLocals里面查找即可。

- 方法四：使用乐观锁机制。前面已经讲述了什么是乐观锁。这里就来描述哈在java开发中怎么使用的。

  其实在表设计的时候，我们通常就需要往表里加一个version字段。每次查询时，查出带有version的数据记录，更新数据时，判断数据库里对应id的记录的version是否和查出的version相同。若相同，则更新数据并把版本号+1；若不同，则说明，该数据发生了并发，被别的线程使用了，进行递归操作，再次执行递归方法，直到成功更新数据为止。

## 使用wait和notify用于协调多线程

用于协调多线程

`wait`和`notify`用于多线程协调运行：

- 在`synchronized`内部可以调用`wait()`使线程进入等待状态；
- 必须在已获得的锁对象上调用`wait()`方法；
- 在`synchronized`内部可以调用`notify()`或`notifyAll()`唤醒其他等待线程；
- 必须在已获得的锁对象上调用`notify()`或`notifyAll()`方法；
- 已唤醒的线程还需要重新获得锁后才能继续执行。

```java
class TaskQueue {
    Queue<String> queue = new LinkedList<>();

    public synchronized void addTask(String s) {
        this.queue.add(s);
        this.notifyAll();
    }

    public synchronized String getTask() throws InterruptedException {
        while (queue.isEmpty()) {
            this.wait();
        }
        return queue.remove();
    }
}
```

addTask执行的时候需要获得this的锁，而getTask执行的时候也要获得this的锁，这造成如果哦queue为空的时候，实际上会造成while循环不出来，线程不协调

多线程协调运行的原则就是：当条件不满足时，线程进入等待状态；当条件满足时，线程被唤醒，继续执行任务。

## 使用ReentrantLock（一种比Synchronied更安全的锁）

我们知道Java语言直接提供了`synchronized`关键字用于加锁，但这种锁一是很重，二是获取时必须一直等待，没有额外的尝试机制。

`java.util.concurrent.locks`包提供的`ReentrantLock`用于替代`synchronized`加锁，我们来看一下传统的`synchronized`代码：

```java
public class Counter {
    private int count;

    public void add(int n) {
        synchronized(this) {
            count += n;
        }
    }
}
```

如果用`ReentrantLock`替代，可以把代码改造为：

```java
public class Counter {
    private final Lock lock = new ReentrantLock();
    private int count;

    public void add(int n) {
        lock.lock();
        try {
            count += n;
        } finally {
            lock.unlock();
        }
    }
}
```

因为`synchronized`是Java语言层面提供的语法，所以我们不需要考虑异常，而`ReentrantLock`是Java代码实现的锁，我们就必须先获取锁，然后在`finally`中正确释放锁。

顾名思义，`ReentrantLock`是可重入锁，它和`synchronized`一样，一个线程可以多次获取同一个锁。

和`synchronized`不同的是，`ReentrantLock`可以尝试获取锁：

```java
if (lock.tryLock(1, TimeUnit.SECONDS)) {
    try {
        ...
    } finally {
        lock.unlock();
    }
}
```

上述代码在尝试获取锁的时候，最多等待1秒。如果1秒后仍未获取到锁，`tryLock()`返回`false`，程序就可以做一些额外处理，而不是无限等待下去。

所以，使用`ReentrantLock`比直接使用`synchronized`更安全，线程在`tryLock()`失败的时候不会导致死锁。

### 小结

`ReentrantLock`可以替代`synchronized`进行同步；

`ReentrantLock`获取锁更安全；

必须先获取到锁，再进入`try {...}`代码块，最后使用`finally`保证释放锁；

可以使用`tryLock()`尝试获取锁。

## 使用Condition（ReentrantLock）

使用`ReentrantLock`比直接使用`synchronized`更安全，可以替代`synchronized`进行线程同步

但是，`synchronized`可以配合`wait`和`notify`实现线程在条件不满足时等待，条件满足时唤醒，用`ReentrantLock`我们怎么编写`wait`和`notify`的功能呢？

答案是使用`Condition`对象来实现`wait`和`notify`的功能。

```java
class TaskQueue {
    private final Lock lock = new ReentrantLock();
    private final Condition condition = lock.newCondition();
    private Queue<String> queue = new LinkedList<>();

    public void addTask(String s) {
        lock.lock();
        try {
            queue.add(s);
            condition.signalAll();
        } finally {
            lock.unlock();
        }
    }

    public String getTask() {
        lock.lock();
        try {
            while (queue.isEmpty()) {
                condition.await();
            }
            return queue.remove();
        } finally {
            lock.unlock();
        }
    }
}
```

可见，使用`Condition`时，引用的`Condition`对象必须从`Lock`实例的`newCondition()`返回，这样才能获得一个绑定了`Lock`实例的`Condition`实例。

`Condition`提供的`await()`、`signal()`、`signalAll()`原理和`synchronized`锁对象的`wait()`、`notify()`、`notifyAll()`是一致的，并且其行为也是一样的：

- `await()`会释放当前锁，进入等待状态；
- `signal()`会唤醒某个等待线程；
- `signalAll()`会唤醒所有等待线程；
- 唤醒线程从`await()`返回后需要重新获得锁。

此外，和`tryLock()`类似，`await()`可以在等待指定时间后，如果还没有被其他线程通过`signal()`或`signalAll()`唤醒，可以自己醒来：

```java
if (condition.await(1, TimeUnit.SECOND)) {
    // 被其他线程唤醒
} else {
    // 指定时间内没有被其他线程唤醒
}
```

可见，使用`Condition`配合`Lock`，我们可以实现更灵活的线程同步。

### 小结

`Condition`可以替代`wait`和`notify`；

`Condition`对象必须从`Lock`对象获取。

## 使用ReadWriteLock（读写锁，增加读效率，使用读多写少条件）

使用synchronized+wait, notify, notifyall 和使用reentrantlock+ await, signal, signalall 加锁，都是很重的锁，他让一个资源在一个时刻只能有一个线程读或者写，而实际上我们可以让一个资源被重复读，写的时候不可重复写，这样我们可以使用读写锁，readwritelock

际上我们想要的是：允许多个线程同时读，但只要有一个线程在写，其他线程就必须等待：

|      | 读     | 写     |
| :--- | :----- | :----- |
| 读   | 允许   | 不允许 |
| 写   | 不允许 | 不允许 |

使用`ReadWriteLock`可以解决这个问题，它保证：

- 只允许一个线程写入（其他线程既不能写入也不能读取）；
- 没有写入时，多个线程允许同时读（提高性能）。

用`ReadWriteLock`实现这个功能十分容易。我们需要创建一个`ReadWriteLock`实例，然后分别获取读锁和写锁：

```java
public class Counter {
    private final ReadWriteLock rwlock = new ReentrantReadWriteLock();
    private final Lock rlock = rwlock.readLock();
    private final Lock wlock = rwlock.writeLock();
    private int[] counts = new int[10];

    public void inc(int index) {
        wlock.lock(); // 加写锁
        try {
            counts[index] += 1;
        } finally {
            wlock.unlock(); // 释放写锁
        }
    }

    public int[] get() {
        rlock.lock(); // 加读锁
        try {
            return Arrays.copyOf(counts, counts.length);
        } finally {
            rlock.unlock(); // 释放读锁
        }
    }
}
```

把读写操作分别用读锁和写锁来加锁，在读取时，多个线程可以同时获得读锁，这样就大大提高了并发读的执行效率。

使用`ReadWriteLock`时，适用条件是同一个数据，有大量线程读取，但仅有少数线程修改。

例如，一个论坛的帖子，回复可以看做写入操作，它是不频繁的，但是，浏览可以看做读取操作，是非常频繁的，这种情况就可以使用`ReadWriteLock`。

### 小结

使用`ReadWriteLock`可以提高读取效率：

- `ReadWriteLock`只允许一个线程写入；
- `ReadWriteLock`允许多个线程在没有写入时同时读取；
- `ReadWriteLock`适合读多写少的场景。

## 使用StampedLock（一种读写锁）

前面介绍的`ReadWriteLock`可以解决多线程同时读，但只有一个线程能写的问题。

如果我们深入分析`ReadWriteLock`，会发现它有个潜在的问题：如果有线程正在读，写线程需要等待读线程释放锁后才能获取写锁，即读的过程中不允许写，这是一种**悲观的读锁**。

要进一步提升并发执行效率，Java 8引入了新的读写锁：`StampedLock`。

`StampedLock`和`ReadWriteLock`相比，改进之处在于：读的过程中也允许获取写锁后写入！这样一来，我们读的数据就可能不一致，所以，需要一点额外的代码来判断读的过程中是否有写入，这种读锁是一种**乐观锁**。

乐观锁的意思就是乐观地估计读的过程中大概率不会有写入，因此被称为乐观锁。反过来，悲观锁则是读的过程中拒绝有写入，也就是写入必须等待。显然乐观锁的并发效率更高，但一旦有小概率的写入导致读取的数据不一致，需要能检测出来，再读一遍就行。

**乐观锁**：乐观的认为读的时候不会有写入，当然发生写入的时候要能检测到有写入并且重新读一遍

**悲观锁**：读的时候拒绝写入，也就是写入必须等待。

```java
public class Point {
    private final StampedLock stampedLock = new StampedLock();

    private double x;
    private double y;

    public void move(double deltaX, double deltaY) {
        long stamp = stampedLock.writeLock(); // 获取写锁
        try {
            x += deltaX;
            y += deltaY;
        } finally {
            stampedLock.unlockWrite(stamp); // 释放写锁
        }
    }

    public double distanceFromOrigin() {
        long stamp = stampedLock.tryOptimisticRead(); // 获得一个乐观读锁
        // 注意下面两行代码不是原子操作
        // 假设x,y = (100,200)
        double currentX = x;
        // 此处已读取到x=100，但x,y可能被写线程修改为(300,400)
        double currentY = y;
        // 此处已读取到y，如果没有写入，读取是正确的(100,200)
        // 如果有写入，读取是错误的(100,400)
        if (!stampedLock.validate(stamp)) { // 检查乐观读锁后是否有其他写锁发生
            stamp = stampedLock.readLock(); // 获取一个悲观读锁
            try {
                currentX = x;
                currentY = y;
            } finally {
                stampedLock.unlockRead(stamp); // 释放悲观读锁
            }
        }
        return Math.sqrt(currentX * currentX + currentY * currentY);
    }
}
```

和`ReadWriteLock`相比，写入的加锁是完全一样的，不同的是读取。注意到首先我们通过`tryOptimisticRead()`获取一个乐观读锁，并返回版本号。接着进行读取，读取完成后，我们通过`validate()`去验证版本号，如果在读取过程中没有写入，版本号不变，验证成功，我们就可以放心地继续后续操作。如果在读取过程中有写入，版本号会发生变化，验证将失败。在失败的时候，我们再通过获取悲观读锁再次读取。由于写入的概率不高，程序在绝大部分情况下可以通过乐观读锁获取数据，极少数情况下使用悲观读锁获取数据。

可见，`StampedLock`把读锁细分为乐观读和悲观读，能进一步提升并发效率。但这也是有代价的：一是代码更加复杂，二是`StampedLock`是不可重入锁，不能在一个线程中反复获取同一个锁。

`StampedLock`还提供了更复杂的将悲观读锁升级为写锁的功能，它主要使用在if-then-update的场景：即先读，如果读的数据满足条件，就返回，如果读的数据不满足条件，再尝试写。

### 小结

`StampedLock`提供了乐观读锁，可取代`ReadWriteLock`以进一步提升并发性能；

`StampedLock`是不可重入锁。

## Concurrent集合类

### ArrayList是线程不安全的

对于ArrayList，相信大家并不陌生。这个类是我们平时接触得最多的一个列表集合类。

面试时相信面试官首先就会问到关于它的知识。一个经常被问到的问题就是：ArrayList是否是线程安全的？

答案当然很简单，无论是背来的还是自己看过源码，我们都知道它是线程不安全的。那么它为什么是线程不安全的呢？它线程不安全的具体体现又是怎样的呢？我们从源码的角度来看下。

二.源码分析
首先看看这个类所拥有的部分属性字段：

```java
public class ArrayList<E> extends AbstractList<E>
        implements List<E>, RandomAccess, Cloneable, java.io.Serializable
{
    /**
     * 列表元素集合数组
     * 如果新建ArrayList对象时没有指定大小，那么会将EMPTY_ELEMENTDATA赋值给elementData，
     * 并在第一次添加元素时，将列表容量设置为DEFAULT_CAPACITY 
     */
    transient Object[] elementData; 

    /**
     * 列表大小，elementData中存储的元素个数
     */
    private int size;
}

```
所以通过这两个字段我们可以看出，ArrayList的实现主要就是用了一个Object的数组，用来保存所有的元素，以及一个size变量用来保存当前数组中已经添加了多少元素。

接着我们看下最重要的add操作时的源代码：

```java
public boolean add(E e) {

    /**
     * 添加一个元素时，做了如下两步操作
     * 1.判断列表的capacity容量是否足够，是否需要扩容
     * 2.真正将元素放在列表的元素数组里面
     */
    ensureCapacityInternal(size + 1);  // Increments modCount!!
    elementData[size++] = e;
    return true;
}
```
ensureCapacityInternal()这个方法的详细代码我们可以暂时不看，它的作用就是判断如果将当前的新元素加到列表后面，列表的elementData数组的大小是否满足，如果size + 1的这个需求长度大于了elementData这个数组的长度，那么就要对这个数组进行扩容。

由此看到add元素时，实际做了两个大的步骤：

1. 判断elementData数组容量是否满足需求
2. 在elementData对应位置上设置值

这样也就出现了第一个导致线程不安全的隐患，在多个线程进行add操作时可能会导致elementData数组越界。具体逻辑如下：

1. 列表大小为9，即size=9
2. 线程A开始进入add方法，这时它获取到size的值为9，调用ensureCapacityInternal方法进行容量判断。
3. 线程B此时也进入add方法，它获取到size的值也为9，也开始调用ensureCapacityInternal方法。
4. 线程A发现需求大小为10，而elementData的大小就为10，可以容纳。于是它不再扩容，返回。
5. 线程B也发现需求大小为10，也可以容纳，返回。
6. 线程A开始进行设置值操作， elementData[size++] = e 操作。此时size变为10。
7. 线程B也开始进行设置值操作，它尝试设置elementData[10] = e，而elementData没有进行过扩容，它的下标最大为9。于是此时会报出一个数组越界的异常ArrayIndexOutOfBoundsException.

另外第二步 elementData[size++] = e 设置值的操作同样会导致线程不安全。从这儿可以看出，这步操作也不是一个原子操作，它由如下两步操作构成：

1. elementData[size] = e;
2. size = size + 1;

在单线程执行这两条代码时没有任何问题，但是当多线程环境下执行时，可能就会发生一个线程的值覆盖另一个线程添加的值，具体逻辑如下：

1. 列表大小为0，即size=0
2. 线程A开始添加一个元素，值为A。此时它执行第一条操作，将A放在了elementData下标为0的位置上。
3. 接着线程B刚好也要开始添加一个值为B的元素，且走到了第一步操作。此时线程B获取到size的值依然为0，于是它将B也放在了elementData下标为0的位置上。
4. 线程A开始将size的值增加为1
5. 线程B开始将size的值增加为2

这样线程AB执行完毕后，理想中情况为size为2，elementData下标0的位置为A，下标1的位置为B。而实际情况变成了size为2，elementData下标为0的位置变成了B，下标1的位置上什么都没有。并且后续除非使用set方法修改此位置的值，否则将一直为null，因为size为2，添加元素时会从下标为2的位置上开始。

### Concurrent集合类实现线程安全的数据结构

我们在前面已经通过`ReentrantLock`和`Condition`实现了一个`BlockingQueue`：

```
public class TaskQueue {
    private final Lock lock = new ReentrantLock();
    private final Condition condition = lock.newCondition();
    private Queue<String> queue = new LinkedList<>();

    public void addTask(String s) {
        lock.lock();
        try {
            queue.add(s);
            condition.signalAll();
        } finally {
            lock.unlock();
        }
    }

    public String getTask() {
        lock.lock();
        try {
            while (queue.isEmpty()) {
                condition.await();
            }
            return queue.remove();
        } finally {
            lock.unlock();
        }
    }
}
```

`BlockingQueue`的意思就是说，当一个线程调用这个`TaskQueue`的`getTask()`方法时，该方法内部可能会让线程变成等待状态，直到队列条件满足不为空，线程被唤醒后，`getTask()`方法才会返回。

因为`BlockingQueue`非常有用，所以我们不必自己编写，可以直接使用Java标准库的`java.util.concurrent`包提供的线程安全的集合：`ArrayBlockingQueue`。

除了`BlockingQueue`外，针对`List`、`Map`、`Set`、`Deque`等，`java.util.concurrent`包也提供了对应的并发集合类。我们归纳一下：

| interface | non-thread-safe         | thread-safe                              |
| :-------- | :---------------------- | :--------------------------------------- |
| List      | ArrayList               | CopyOnWriteArrayList                     |
| Map       | HashMap                 | ConcurrentHashMap                        |
| Set       | HashSet / TreeSet       | CopyOnWriteArraySet                      |
| Queue     | ArrayDeque / LinkedList | ArrayBlockingQueue / LinkedBlockingQueue |
| Deque     | ArrayDeque / LinkedList | LinkedBlockingDeque                      |

使用这些并发集合与使用非线程安全的集合类完全相同。我们以`ConcurrentHashMap`为例：

```
Map<String, String> map = new ConcurrentHashMap<>();
// 在不同的线程读写:
map.put("A", "1");
map.put("B", "2");
map.get("A", "1");
```

因为所有的同步和加锁的逻辑都在集合内部实现，对外部调用者来说，只需要正常按接口引用，其他代码和原来的非线程安全代码完全一样。即当我们需要多线程访问时，把：

```
Map<String, String> map = new HashMap<>();
```

改为：

```
Map<String, String> map = new ConcurrentHashMap<>();
```

就可以了。

`java.util.Collections`工具类还提供了一个旧的线程安全集合转换器，可以这么用：

```
Map unsafeMap = new HashMap();
Map threadSafeMap = Collections.synchronizedMap(unsafeMap);
```

但是它实际上是用一个包装类包装了非线程安全的`Map`，然后对所有读写方法都用`synchronized`加锁，这样获得的线程安全集合的性能比`java.util.concurrent`集合要低很多，所以不推荐使用。

#### 小结

使用`java.util.concurrent`包提供的线程安全的并发集合可以大大简化多线程编程：

多线程同时读写并发集合是安全的；

尽量使用Java标准库提供的并发集合，避免自己编写同步代码。

### Concurrent原子类型 Atomic

Java的`java.util.concurrent`包除了提供底层锁、并发集合外，还提供了一组原子操作的封装类，它们位于`java.util.concurrent.atomic`包。

我们以`AtomicInteger`为例，它提供的主要操作有：

- 增加值并返回新值：`int addAndGet(int delta)`
- 加1后返回新值：`int incrementAndGet()`
- 获取当前值：`int get()`
- 用CAS方式设置：`int compareAndSet(int expect, int update)`

Atomic类是通过无锁（lock-free）的方式实现的线程安全（thread-safe）访问。它的主要原理是利用了CAS：Compare and Set。

如果我们自己通过CAS编写`incrementAndGet()`，它大概长这样：

```
public int incrementAndGet(AtomicInteger var) {
    int prev, next;
    do {
        prev = var.get();
        next = prev + 1;
    } while ( ! var.compareAndSet(prev, next));
    return next;
}
```

CAS是指，在这个操作中，如果`AtomicInteger`的当前值是`prev`，那么就更新为`next`，返回`true`。如果`AtomicInteger`的当前值不是`prev`，就什么也不干，返回`false`。通过CAS操作并配合`do ... while`循环，即使其他线程修改了`AtomicInteger`的值，最终的结果也是正确的。

我们利用`AtomicLong`可以编写一个多线程安全的全局唯一ID生成器：

```
class IdGenerator {
    AtomicLong var = new AtomicLong(0);

    public long getNextId() {
        return var.incrementAndGet();
    }
}
```

通常情况下，我们并不需要直接用`do ... while`循环调用`compareAndSet`实现复杂的并发操作，而是用`incrementAndGet()`这样的封装好的方法，因此，使用起来非常简单。

在高度竞争的情况下，还可以使用Java 8提供的`LongAdder`和`LongAccumulator`。

#### 小结

使用`java.util.concurrent.atomic`提供的原子操作可以简化多线程编程：

- 原子操作实现了无锁的线程安全；
- 适用于计数器，累加器等。

## 线程池使用

### 实现Runnable接口创建线程池

**把很多小任务让一组线程来执行，而不是一个任务对应一个新线程。这种能接收大量小任务并进行分发处理的就是线程池。**

简单地说，线程池内部维护了若干个线程，没有任务的时候，这些线程都处于等待状态。如果有新任务，就分配一个空闲线程执行。如果所有线程都处于忙碌状态，新任务要么放入队列等待，要么增加一个新线程进行处理。

Java标准库提供了`ExecutorService`接口表示线程池，它的典型用法如下：

```
// 创建固定大小的线程池:
ExecutorService executor = Executors.newFixedThreadPool(3);
// 提交任务:
executor.submit(task1);
executor.submit(task2);
executor.submit(task3);
executor.submit(task4);
executor.submit(task5);
```

因为`ExecutorService`只是接口，Java标准库提供的几个常用实现类有：

- FixedThreadPool：线程数固定的线程池；
- CachedThreadPool：线程数根据任务动态调整的线程池；
- SingleThreadExecutor：仅单线程执行的线程池。

创建这些线程池的方法都被封装到`Executors`这个类中。我们以`FixedThreadPool`为例，看看线程池的执行逻辑：

```java
import java.util.concurrent.*;

public class Main {
    public static void main(String[] args) {
        // 创建一个固定大小的线程池:
        ExecutorService es = Executors.newFixedThreadPool(4);
        for (int i = 0; i < 6; i++) {
            es.submit(new Task("" + i));
        }
        // 关闭线程池:
        es.shutdown();
    }
}

class Task implements Runnable {
    private final String name;

    public Task(String name) {
        this.name = name;
    }

    @Override
    public void run() {
        System.out.println("start task " + name);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
        }
        System.out.println("end task " + name);
    }
}
```

我们观察执行结果，一次性放入6个任务，由于线程池只有固定的4个线程，因此，前4个任务会同时执行，等到有线程空闲后，才会执行后面的两个任务。

线程池在程序结束的时候要关闭。使用`shutdown()`方法关闭线程池的时候，它会等待正在执行的任务先完成，然后再关闭。`shutdownNow()`会立刻停止正在执行的任务，`awaitTermination()`则会等待指定的时间让线程池关闭。

如果我们把线程池改为`CachedThreadPool`，由于这个线程池的实现会根据任务数量动态调整线程池的大小，所以6个任务可一次性全部同时执行。

如果我们想把线程池的大小限制在4～10个之间动态调整怎么办？我们查看`Executors.newCachedThreadPool()`方法的源码：

```
public static ExecutorService newCachedThreadPool() {
    return new ThreadPoolExecutor(0, Integer.MAX_VALUE,
                                    60L, TimeUnit.SECONDS,
                                    new SynchronousQueue<Runnable>());
}
```

因此，想创建指定动态范围的线程池，可以这么写：

```
int min = 4;
int max = 10;
ExecutorService es = new ThreadPoolExecutor(min, max,
        60L, TimeUnit.SECONDS, new SynchronousQueue<Runnable>());
```

#### ScheduledThreadPool

还有一种任务，需要定期反复执行，例如，每秒刷新证券价格。这种任务本身固定，需要反复执行的，可以使用`ScheduledThreadPool`。放入`ScheduledThreadPool`的任务可以定期反复执行。

创建一个`ScheduledThreadPool`仍然是通过`Executors`类：

```
ScheduledExecutorService ses = Executors.newScheduledThreadPool(4);
```

我们可以提交一次性任务，它会在指定延迟后只执行一次：

```
// 1秒后执行一次性任务:
ses.schedule(new Task("one-time"), 1, TimeUnit.SECONDS);
```

如果任务以固定的每3秒执行，我们可以这样写：

```
// 2秒后开始执行定时任务，每3秒执行:
ses.scheduleAtFixedRate(new Task("fixed-rate"), 2, 3, TimeUnit.SECONDS);
```

如果任务以固定的3秒为间隔执行，我们可以这样写：

```
// 2秒后开始执行定时任务，以3秒为间隔执行:
ses.scheduleWithFixedDelay(new Task("fixed-delay"), 2, 3, TimeUnit.SECONDS);
```

注意FixedRate和FixedDelay的区别。FixedRate是指任务总是以固定时间间隔触发，不管任务执行多长时间：

```ascii
│░░░░   │░░░░░░ │░░░    │░░░░░  │░░░  
├───────┼───────┼───────┼───────┼────>
│<─────>│<─────>│<─────>│<─────>│
```

而FixedDelay是指，上一次任务执行完毕后，等待固定的时间间隔，再执行下一次任务：

```ascii
│░░░│       │░░░░░│       │░░│       │░
└───┼───────┼─────┼───────┼──┼───────┼──>
    │<─────>│     │<─────>│  │<─────>│
```

因此，使用`ScheduledThreadPool`时，我们要根据需要选择执行一次、FixedRate执行还是FixedDelay执行。

细心的童鞋还可以思考下面的问题：

- 在FixedRate模式下，假设每秒触发，如果某次任务执行时间超过1秒，后续任务会不会并发执行？
- 如果任务抛出了异常，后续任务是否继续执行？

Java标准库还提供了一个`java.util.Timer`类，这个类也可以定期执行任务，但是，一个`Timer`会对应一个`Thread`，所以，一个`Timer`只能定期执行一个任务，多个定时任务必须启动多个`Timer`，而一个`ScheduledThreadPool`就可以调度多个定时任务，所以，我们完全可以用`ScheduledThreadPool`取代旧的`Timer`。

### 实现Callable方法创建线程池

Callable方法比Runnable方法要好的地方在于可以获得一个返回的对象

在执行多个任务的时候，使用Java标准库提供的线程池是非常方便的。我们提交的任务只需要实现`Runnable`接口，就可以让线程池去执行：

```
class Task implements Runnable {
    public String result;

    public void run() {
        this.result = longTimeCalculation(); 
    }
}
```

`Runnable`接口有个问题，它的方法没有返回值。如果任务需要一个返回结果，那么只能保存到变量，还要提供额外的方法读取，非常不便。所以，Java标准库还提供了一个`Callable`接口，和`Runnable`接口比，它多了一个返回值：

```
class Task implements Callable<String> {
    public String call() throws Exception {
        return longTimeCalculation(); 
    }
}
```

并且`Callable`接口是一个泛型接口，可以返回指定类型的结果。

现在的问题是，如何获得异步执行的结果？

如果仔细看`ExecutorService.submit()`方法，可以看到，它返回了一个`Future`类型，一个`Future`类型的实例代表一个未来能获取结果的对象：

```
ExecutorService executor = Executors.newFixedThreadPool(4); 
// 定义任务:
Callable<String> task = new Task();
// 提交任务并获得Future:
Future<String> future = executor.submit(task);
// 从Future获取异步执行返回的结果:
String result = future.get(); // 可能阻塞
```

当我们提交一个`Callable`任务后，我们会同时获得一个`Future`对象，然后，我们在主线程某个时刻调用`Future`对象的`get()`方法，就可以获得异步执行的结果。在调用`get()`时，如果异步任务已经完成，我们就直接获得结果。如果异步任务还没有完成，那么`get()`会阻塞，直到任务完成后才返回结果。

一个`Future<V>`接口表示一个未来可能会返回的结果，它定义的方法有：

- `get()`：获取结果（可能会等待）
- `get(long timeout, TimeUnit unit)`：获取结果，但只等待指定的时间；
- `cancel(boolean mayInterruptIfRunning)`：取消当前任务；
- `isDone()`：判断任务是否已完成。

### 使用CompletableFuture

使用`Future`获得异步执行结果时，要么调用阻塞方法`get()`，要么轮询看`isDone()`是否为`true`，这两种方法都不是很好，因为主线程也会被迫等待。

从Java 8开始引入了`CompletableFuture`，它针对`Future`做了改进，可以传入回调对象，当异步任务完成或者发生异常时，自动调用回调对象的回调方法。

我们以获取股票价格为例，看看如何使用`CompletableFuture`：

```
// CompletableFuture
import java.util.concurrent.CompletableFuture;
```

创建一个`CompletableFuture`是通过`CompletableFuture.supplyAsync()`实现的，它需要一个实现了`Supplier`接口的对象：

```
public interface Supplier<T> {
    T get();
}
```

这里我们用lambda语法简化了一下，直接传入`Main::fetchPrice`，因为`Main.fetchPrice()`静态方法的签名符合`Supplier`接口的定义（除了方法名外）。

紧接着，`CompletableFuture`已经被提交给默认的线程池执行了，我们需要定义的是`CompletableFuture`完成时和异常时需要回调的实例。完成时，`CompletableFuture`会调用`Consumer`对象：

```
public interface Consumer<T> {
    void accept(T t);
}
```

异常时，`CompletableFuture`会调用`Function`对象：

```
public interface Function<T, R> {
    R apply(T t);
}
```

这里我们都用lambda语法简化了代码。

可见`CompletableFuture`的优点是：

- 异步任务结束时，会自动回调某个对象的方法；
- 异步任务出错时，会自动回调某个对象的方法；
- 主线程设置好回调后，不再关心异步任务的执行。

如果只是实现了异步回调机制，我们还看不出`CompletableFuture`相比`Future`的优势。`CompletableFuture`更强大的功能是，多个`CompletableFuture`可以串行执行，例如，定义两个`CompletableFuture`，第一个`CompletableFuture`根据证券名称查询证券代码，第二个`CompletableFuture`根据证券代码查询证券价格，这两个`CompletableFuture`实现串行操作如下：

```
// CompletableFuture
import java.util.concurrent.CompletableFuture;
```

除了串行执行外，多个`CompletableFuture`还可以并行执行。例如，我们考虑这样的场景：

同时从新浪和网易查询证券代码，只要任意一个返回结果，就进行下一步查询价格，查询价格也同时从新浪和网易查询，只要任意一个返回结果，就完成操作：

```
// CompletableFuture
import java.util.concurrent.CompletableFuture;
```

上述逻辑实现的异步查询规则实际上是：

```ascii
┌─────────────┐ ┌─────────────┐
│ Query Code  │ │ Query Code  │
│  from sina  │ │  from 163   │
└─────────────┘ └─────────────┘
       │               │
       └───────┬───────┘
               ▼
        ┌─────────────┐
        │    anyOf    │
        └─────────────┘
               │
       ┌───────┴────────┐
       ▼                ▼
┌─────────────┐  ┌─────────────┐
│ Query Price │  │ Query Price │
│  from sina  │  │  from 163   │
└─────────────┘  └─────────────┘
       │                │
       └────────┬───────┘
                ▼
         ┌─────────────┐
         │    anyOf    │
         └─────────────┘
                │
                ▼
         ┌─────────────┐
         │Display Price│
         └─────────────┘
```

除了`anyOf()`可以实现“任意个`CompletableFuture`只要一个成功”，`allOf()`可以实现“所有`CompletableFuture`都必须成功”，这些组合操作可以实现非常复杂的异步流程控制。

最后我们注意`CompletableFuture`的命名规则：

- `xxx()`：表示该方法将继续在已有的线程中执行；
- `xxxAsync()`：表示将异步在线程池中执行。

### ForkJoin线程池

ForkJoin线程池判断任务是否很大，如果很大就划分任务为小任务，然后再小任务上执行完成之后将小任务的结果组合起来得到结果，典型应用就是很多数求和

Java 7开始引入了一种新的Fork/Join线程池，它可以执行一种特殊的任务：把一个大任务拆成多个小任务并行执行。

我们举个例子：如果要计算一个超大数组的和，最简单的做法是用一个循环在一个线程内完成：

```ascii
┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
```

还有一种方法，可以把数组拆成两部分，分别计算，最后加起来就是最终结果，这样可以用两个线程并行执行：

```ascii
┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
┌─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┴─┘
```

如果拆成两部分还是很大，我们还可以继续拆，用4个线程并行执行：

```ascii
┌─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┘
┌─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┘
┌─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┘
┌─┬─┬─┬─┬─┬─┐
└─┴─┴─┴─┴─┴─┘
```

这就是Fork/Join任务的原理：判断一个任务是否足够小，如果是，直接计算，否则，就分拆成几个小任务分别计算。这个过程可以反复“裂变”成一系列小任务。

我们来看如何使用Fork/Join对大数据进行并行求和：

```
import java.util.Random;
import java.util.concurrent.*;
```

观察上述代码的执行过程，一个大的计算任务0~2000首先分裂为两个小任务0~1000和1000~2000，这两个小任务仍然太大，继续分裂为更小的0~500，500~1000，1000~1500，1500~2000，最后，计算结果被依次合并，得到最终结果。

因此，核心代码`SumTask`继承自`RecursiveTask`，在`compute()`方法中，关键是如何“分裂”出子任务并且提交子任务：

```
class SumTask extends RecursiveTask<Long> {
    protected Long compute() {
        // “分裂”子任务:
        SumTask subtask1 = new SumTask(...);
        SumTask subtask2 = new SumTask(...);
        // invokeAll会并行运行两个子任务:
        invokeAll(subtask1, subtask2);
        // 获得子任务的结果:
        Long subresult1 = subtask1.join();
        Long subresult2 = subtask2.join();
        // 汇总结果:
        return subresult1 + subresult2;
    }
}
```

Fork/Join线程池在Java标准库中就有应用。Java标准库提供的`java.util.Arrays.parallelSort(array)`可以进行并行排序，它的原理就是内部通过Fork/Join对大数组分拆进行并行排序，在多核CPU上就可以大大提高排序的速度。

## 线程池细节

### 目的

- 利用多线程压榨CPU算力；
- 降低创建、销毁线程过程的CPU开销与GC压力；
- 提高任务响应速度，无需等待线程创建；
- 限制线程数量并可以进行统一的分配、调优和监控。

### 使用流程

<details class="details-reset details-overlay details-overlay-dark" style="box-sizing: border-box; display: block; margin-top: 0px; margin-bottom: 16px;"><summary class="btn-sm btn position-absolute js-full-screen-render render-expand" aria-haspopup="dialog" role="button" style="box-sizing: border-box; display: inline-block; cursor: pointer; position: absolute !important; padding: 3px 12px; font-size: 12px; font-weight: 500; line-height: 20px; white-space: nowrap; vertical-align: middle; user-select: none; border-width: 1px; border-style: solid; border-color: var(--color-btn-border); border-image: initial; border-radius: 6px; appearance: none; color: var(--color-btn-text); background-color: var(--color-btn-bg); box-shadow: var(--color-btn-shadow),var(--color-btn-inset-shadow); transition: color 0.2s cubic-bezier(0.3, 0, 0.5, 1) 0s, background-color, border-color; list-style: none; top: 2px; right: 2px;"><svg width="16" height="16" viewBox="0 0 16 16" fill="currentColor" class="octicon" style="display:inline-block;vertical-align:text-bottom"><path fill-rule="evenodd" d="M3.72 3.72a.75.75 0 011.06 1.06L2.56 7h10.88l-2.22-2.22a.75.75 0 011.06-1.06l3.5 3.5a.75.75 0 010 1.06l-3.5 3.5a.75.75 0 11-1.06-1.06l2.22-2.22H2.56l2.22 2.22a.75.75 0 11-1.06 1.06l-3.5-3.5a.75.75 0 010-1.06l3.5-3.5z"></path></svg></summary></details>

<iframe class="render-viewer" sandbox="allow-scripts allow-same-origin allow-top-navigation" src="https://viewscreen.githubusercontent.com/markdown/mermaid?color_mode=light#66d955df-dae3-4f25-8510-a7227844c0c5" name="66d955df-dae3-4f25-8510-a7227844c0c5" data-content="{&quot;data&quot;:&quot;graph LR\nstart[提交任务] --&amp;gt; condition1{核心线程池已满}\ncondition1 -- Y --&amp;gt; condition2{队列已满}\ncondition2 -- Y --&amp;gt; condition3{线程池已满}\ncondition3 -- Y --&amp;gt; end3[按策略处理无法执行的任务]\ncondition3 -- N --&amp;gt; end4[创建线程并执行任务]\ncondition2 -- N --&amp;gt; end2[任务进队列]\ncondition1{核心线程池是否已满} -- N --&amp;gt; end1[创建线程并执行任务]\n&quot;}" style="box-sizing: border-box; display: block; width: 1012px; height: 304.594px; border: 0px;"></iframe>

[![thread-pool](https://github.com/AlbertoWang/java-noob/raw/master/%E5%B8%B8%E8%80%83%E9%A2%98.assets/thread-pool.png)](https://github.com/AlbertoWang/java-noob/blob/master/常考题.assets/thread-pool.png)

其中`corePool`是核心线程池（保活线程），`maximumPool`是总线程池（保活线程+工作线程），`blockQueue`是等待任务队列，`rejectedExecutionHandler`是拒绝策略：

1. 未达到corePoolSize时，核心线程池会开辟新线程运行任务，任务结束后线程不销毁；
2. 任务队列未满时，新任务提交到等待队列；
3. 未达到最大线程数时，新建工作线程执行任务，线程空闲时间超过keepAliveTime时被销毁；
4. 超过最大线程数时，按拒绝策略处理，包括：抛出异常、使用调用者线程运行任务、丢弃新任务、丢弃队列头任务等。

### 相关参数及设置

#### 可选参数

- `corePoolSize`：当使用了`LinkedBlockingQueue = new LinkedBlockQueue`的时候，队列长度默认无限长，会导致线程数量永远等于`corePoolSize`，任务激增时任务响应时间也激增；
- `maxPoolSize`：线程池中线程个数，增加线程的公式：$(任务数-queueCapacity) \times (原线程数 \div 原任务数)$；
- `keepAliveTime`：线程最大（空闲）存活时间；
- `rejectedExecutionHandler`：线程被拒绝的解决方案，可以自己重写。

#### 参数选择

在参数选择上，通过判断IO密集型还是计算密集型来进行参数设置：

- IO密集型：$(等待时间+计算时间)/计算时间*CPU核心数$；
- 计算密集型：线程数为CPU核心数。

### `Executors`包内实现的`ExecutorService`

- `newFixedThreadPool`：使用`LinkedBlockingQueue`，线程池长度通过参数固定，没达到指定数量前会继续创建线程，**队列不限长度**，`maxpoolsize`与`keepalive`参数无效，线程空闲时按**FIFO调度**，不空闲时进入队列；
- `newSingleThreadExecutor`：同样使用`LinkedBlockingQueue`，**线程池中只有一个线程**，队列不限长度，线程空闲时按FIFO调度，不空闲时进入队列；
- `newCachedThreadPool`：使用`SynchronousQueue`，**核心线程池长度为0**，**队列需要插入元素前必须有另一个线程从这个队列消耗元素**；
- `newScheduledThreadPool`：使用`DelayQueue`，**提交的任务按时间为优先级进入阻塞队列**，线程只能从队列获取任务。

##  ThreadLocal

多线程是Java实现多任务的基础，`Thread`对象代表一个线程，我们可以在代码中调用`Thread.currentThread()`获取当前线程。例如，打印日志时，可以同时打印出当前线程的名字：

```
// Thread
```

 Run

对于多任务，Java标准库提供的线程池可以方便地执行这些任务，同时复用线程。Web应用程序就是典型的多任务应用，每个用户请求页面时，我们都会创建一个任务，类似：

```
public void process(User user) {
    checkPermission();
    doWork();
    saveStatus();
    sendResponse();
}
```

然后，通过线程池去执行这些任务。

观察`process()`方法，它内部需要调用若干其他方法，同时，我们遇到一个问题：如何在一个线程内传递状态？

`process()`方法需要传递的状态就是`User`实例。有的童鞋会想，简单地传入`User`就可以了：

```
public void process(User user) {
    checkPermission(user);
    doWork(user);
    saveStatus(user);
    sendResponse(user);
}
```

但是往往一个方法又会调用其他很多方法，这样会导致`User`传递到所有地方：

```
void doWork(User user) {
    queryStatus(user);
    checkStatus();
    setNewStatus(user);
    log();
}
```

这种在一个线程中，横跨若干方法调用，需要传递的对象，我们通常称之为上下文（Context），它是一种状态，可以是用户身份、任务信息等。

给每个方法增加一个context参数非常麻烦，而且有些时候，如果调用链有无法修改源码的第三方库，`User`对象就传不进去了。

Java标准库提供了一个特殊的`ThreadLocal`，它可以在一个线程中传递同一个对象。

`ThreadLocal`实例通常总是以静态字段初始化如下：

```
static ThreadLocal<User> threadLocalUser = new ThreadLocal<>();
```

它的典型使用方式如下：

```
void processUser(user) {
    try {
        threadLocalUser.set(user);
        step1();
        step2();
    } finally {
        threadLocalUser.remove();
    }
}
```

通过设置一个`User`实例关联到`ThreadLocal`中，在移除之前，所有方法都可以随时获取到该`User`实例：

```
void step1() {
    User u = threadLocalUser.get();
    log();
    printUser();
}

void log() {
    User u = threadLocalUser.get();
    println(u.name);
}

void step2() {
    User u = threadLocalUser.get();
    checkUser(u.id);
}
```

注意到普通的方法调用一定是同一个线程执行的，所以，`step1()`、`step2()`以及`log()`方法内，`threadLocalUser.get()`获取的`User`对象是同一个实例。

实际上，可以把`ThreadLocal`看成一个全局`Map<Thread, Object>`：每个线程获取`ThreadLocal`变量时，总是使用`Thread`自身作为key：

```
Object threadLocalValue = threadLocalMap.get(Thread.currentThread());
```

因此，`ThreadLocal`相当于给每个线程都开辟了一个独立的存储空间，各个线程的`ThreadLocal`关联的实例互不干扰。

最后，特别注意`ThreadLocal`一定要在`finally`中清除：

```
try {
    threadLocalUser.set(user);
    ...
} finally {
    threadLocalUser.remove();
}
```

这是因为当前线程执行完相关代码后，很可能会被重新放入线程池中，如果`ThreadLocal`没有被清除，该线程执行其他代码时，会把上一次的状态带进去。

为了保证能释放`ThreadLocal`关联的实例，我们可以通过`AutoCloseable`接口配合`try (resource) {...}`结构，让编译器自动为我们关闭。例如，一个保存了当前用户名的`ThreadLocal`可以封装为一个`UserContext`对象：

```
public class UserContext implements AutoCloseable {

    static final ThreadLocal<String> ctx = new ThreadLocal<>();

    public UserContext(String user) {
        ctx.set(user);
    }

    public static String currentUser() {
        return ctx.get();
    }

    @Override
    public void close() {
        ctx.remove();
    }
}
```

使用的时候，我们借助`try (resource) {...}`结构，可以这么写：

```
try (var ctx = new UserContext("Bob")) {
    // 可任意调用UserContext.currentUser():
    String currentUser = UserContext.currentUser();
} // 在此自动调用UserContext.close()方法释放ThreadLocal关联对象
```

这样就在`UserContext`中完全封装了`ThreadLocal`，外部代码在`try (resource) {...}`内部可以随时调用`UserContext.currentUser()`获取当前线程绑定的用户名。

## Java线程是可重入锁

对同一个线程，能否在获取到锁以后继续获取同一个锁？

同一个线程，在获取到同一个锁之后可以获取同一个锁

答案是肯定的。JVM允许同一个线程重复获取同一个锁，这种能被同一个线程反复获取的锁，就叫做可重入锁。

由于Java的线程锁是可重入锁，所以，获取锁的时候，不但要判断是否是第一次获取，还要记录这是第几次获取。每获取一次锁，记录+1，每退出`synchronized`块，记录-1，减到0的时候，才会真正释放锁。

### 死锁

两个线程各自持有不同的锁，然后各自试图获取对方手里的锁，造成了双方无限等待下去，这就是死锁。

死锁发生后，没有任何机制能解除死锁，只能强制结束JVM进程。

### 死锁四个必要条件

互斥：某种资源一次只允许一个进程访问，即该资源一旦分配给某个进程，其他进程就不能再访问，直到该进程访问结束。
占有且等待：一个进程本身占有资源（一种或多种），同时还有资源未得到满足，正在等待其他进程释放该资源。
不可抢占：别人已经占有了某项资源，你不能因为自己也需要该资源，就去把别人的资源抢过来。
循环等待：存在一个进程链，使得每个进程都占有下一个进程所需的至少一种资源。

### 死锁预防
我们可以通过破坏死锁产生的4个必要条件来 预防死锁，由于资源互斥是资源使用的固有特性是无法改变的。

破坏“占有且等待”条件

方法1：所有的进程在开始运行之前，必须一次性地申请其在整个运行过程中所需要的全部资源。
         优点：简单易实施且安全。
         缺点：因为某项资源不满足，进程无法启动，而其他已经满足了的资源也不会得到利用，严重降低了资源的利用率，造成资源浪费。
                  使进程经常发生饥饿现象。

方法2：该方法是对第一种方法的改进，允许进程只获得运行初期需要的资源，便开始运行，在运行过程中逐步释放掉分配到的已经使用完毕的资源，然后再去请求新的资源。这样的话，资源的利用率会得到提高，也会减少进程的饥饿问题。

破坏“不可抢占”条件

当一个已经持有了一些资源的进程在提出新的资源请求没有得到满足时，它必须释放已经保持的所有资源，待以后需要使用的时候再重新申请。这就意味着进程已占有的资源会被短暂地释放或者说是被抢占了。

该种方法实现起来比较复杂，且代价也比较大。释放已经保持的资源很有可能会导致进程之前的工作实效等，反复的申请和释放资源会导致进程的执行被无限的推迟，这不仅会延长进程的周转周期，还会影响系统的吞吐量。

破坏“循环等待”条件

采用资源有序分配其基本思想是将系统中的所有资源顺序编号，将紧缺的，稀少的采用较大的编号，在申请资源时必须按照编号的顺序进行（从小往大申请），一个进程只有获得较小编号的进程才能申请较大编号的进程。

 

### 死锁的避免
死锁避免：在使用前进行判断，只允许不会产生死锁的进程申请资源；

死锁避免是利用额外的检验信息，在分配资源时判断是否会出现死锁，只在不会出现死锁的情况下才分配资源。
两种避免办法：
    1、如果一个进程的请求会导致死锁，则不启动该进程
    2、如果一个进程的增加资源请求会导致死锁 ，则拒绝该申请。
避免死锁的具体实现通常利用银行家算法
    银行家算法
a、银行家算法的相关数据结构
    可利用资源向量Available：用于表示系统里边各种资源剩余的数目。由于系统里边拥有的资源通常都是有很多种（假设有m种），所以，我们用一个有m个元素的数组来表示各种资源。数组元素的初始值为系统里边所配置的该类全部可用资源的数目，其数值随着该类资源的分配与回收动态地改变。
    最大需求矩阵Max：用于表示各个进程对各种资源的额最大需求量。进程可能会有很多个（假设为n个），那么，我们就可以用一个nxm的矩阵来表示各个进程多各种资源的最大需求量
    分配矩阵Allocation：顾名思义，就是用于表示已经分配给各个进程的各种资源的数目。也是一个nxm的矩阵。
    需求矩阵Need：用于表示进程仍然需要的资源数目，用一个nxm的矩阵表示。系统可能没法一下就满足了某个进程的最大需求（通常进程对资源的最大需求也是只它在整个运行周期中需要的资源数目，并不是每一个时刻都需要这么多），于是，为了进程的执行能够向前推进，通常，系统会先分配个进程一部分资源保证进程能够执行起来。那么，进程的最大需求减去已经分配给进程的数目，就得到了进程仍然需要的资源数目了。

银行家算法通过对进程需求、占有和系统拥有资源的实时统计，确保系统在分配给进程资源不会造成死锁才会给与分配。
死锁避免的优点：不需要死锁预防中的抢占和重新运行进程，并且比死锁预防的限制要少。
死锁避免的限制：
    必须事先声明每个进程请求的最大资源量
    考虑的进程必须无关的，也就是说，它们执行的顺序必须没有任何同步要求的限制
    分配的资源数目必须是固定的。
    在占有资源时，进程不能退出

## Java多线程\**实现的方式有四种**

1. 1.继承Thread类，重写run**方法**
2. 2.实现Runnable接口，重写run**方法**，实现Runnable接口的实现类的实例对象作为Thread构造函数的target.
3. 3.通过Callable和FutureTask创建**线程**
4. 4.通过**线程**池创建**线程**

## 页面置换算法

在地址映射过程中，若在页面中发现所要访问的页面不在内存中，则产生**缺页中断**。当发生缺页中断时，如果操作系统内存中没有空闲页面，则操作系统必须在内存选择一个页面将其移出内存，以便为即将调入的页面让出空间。而用来选择淘汰哪一页的规则叫做**页面置换算法**。

### 抖动和***Belady*** 异常

抖动指频繁缺页造成频繁调入调出内存

Belady异常是FIFO产生的分配给进程的页面数越多反而缺页频率越高的现象。

1. FIFO，先进先出
2. LRU，最近最少使用
3. OPT，最远不使用。主要是前两种，第三种无法预测未来请求

### 内存分配碎片

内碎片：系统多分给进程的进程没有使用的内存

外碎片：因为内存太小而系统无法分给任何进程的内存



## 进程与线程

### 进程与线程的区别

进程是资源分配的最小单位，线程是任务调度与执行的最小单位。

- 进程维护成本高，彼此之间独立，安全性高；
- 线程有独立堆栈空间，但共享数据段，开销小。

### 进程与线程的资源

- 共享资源：

  堆、全局变量、静态变量、文件等公共资源、进程代码段、进程当前所在目录等信息；

- 独享资源：

  栈、线程ID、寄存器组的值、错误返回码、信号屏蔽码

### 进程与线程的选择

- 频繁创建、销毁、切换（并行）的情况下，使用线程；
- 需要稳定安全的情况下，使用进程。

### Linux常用命令

- 搜索进程ID：`ps -ef | grep <进程名>`，`-e`相当于`-a`是全部列出，`-f`是显示UID等（也可以用`ps -aux | grep <进程名>`）；
- 查询文件位置：`find <查询路径> -name <文件名>`
- 任务管理器：`top`，具体查看某个进程的情况：`top -p <pid>`；
- 内存使用情况：`free -m`；
- 统计：`wc`，统计单词个数使用`grep <单词> <文件路径> ｜ wc -o`；
- 修改用户权限：`chmod`；
- 设置进程优先级：`nice -n <优先级，越小优先级越高> bash`（开新bash运行），`renice -n <优先级> -p <进程ID> -u <用户>`（修改进程优先级）；



## ThreadLocal

ThreadLocal用于对线程内多个函数调用传递上下文，上下文是多个函数共同使用的对象、数据模型、用户信息等。为什么用ThreadLocal而不用在函数中直接传递参数，一种情况是给函数添加上下文麻烦，一种是有些第三方库无法修改他的源码添加传递对象。

ThreadLocal总是以静态字段初始化

```java
static ThreadLocal<User> threadLocalUser = new ThrreadLocal<>() ;
```

ThreadLocal的使用方式是

```java
void processUser(user) {
    try {
        threadLocalUser.set(user);
        step1();
        step2();
    } finally {
        threadLocalUser.remove();
    }
}
```

ThreadLocal实际上相当于一个全局Map<Thread, Object>，在同一个线程的方法总是通过Thread.currentThead()作为Key区获得ThreadLocal中的数据，各个不同的线程的数据互不影响。

注意在使用完ThreadLocal之后要使用thread.remove()去消除当前Thread关联的Object，因为在线程池条件下，一个Thread可能被复用，而就的Thread所关联的状态可能会造成影响。

为了关闭ThreadLocal关联的对象，可以向上面一样在finally里面关闭，同时也可以通过实现AutoCloseable接口配合try(resource){...}这样的结构让编译器自动为我们关闭。

```java
package com.itranswarp.learnjava;

import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.TimeUnit;

/**
 * Learn Java from https://www.liaoxuefeng.com/
 * 
 * @author liaoxuefeng
 */
public class Main {
	public static void main(String[] args) throws Exception {
		ExecutorService es = Executors.newFixedThreadPool(3);
		String[] users = new String[] { "Bob", "Alice", "Tim", "Mike", "Lily", "Jack", "Bush" };
		for (String user : users) {
			es.submit(new Task(user));
		}
		es.awaitTermination(3, TimeUnit.SECONDS);
		es.shutdown();
	}
}

class UserContext implements AutoCloseable {
	private static final ThreadLocal<String> userThreadLocal = new ThreadLocal<>();

	public UserContext(String name) {
		userThreadLocal.set(name);
		System.out.printf("[%s] init user %s...\n", Thread.currentThread().getName(), UserContext.getCurrentUser());
	}

	public static String getCurrentUser() {
		return userThreadLocal.get();
	}

	@Override
	public void close() {
		System.out.printf("[%s] cleanup for user %s...\n", Thread.currentThread().getName(),
				UserContext.getCurrentUser());
		userThreadLocal.remove();
	}
}

class Task implements Runnable {

	final String username;

	public Task(String username) {
		this.username = username;
	}

	@Override
	public void run() {
		try (var ctx = new UserContext(this.username)) {
			new Task1().process();
			new Task2().process();
			new Task3().process();
		}
	}
}

class Task1 {
	public void process() {
		try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
		}
		System.out.printf("[%s] check user %s...\n", Thread.currentThread().getName(), UserContext.getCurrentUser());
	}
}

class Task2 {
	public void process() {
		try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
		}
		System.out.printf("[%s] %s registered ok.\n", Thread.currentThread().getName(), UserContext.getCurrentUser());
	}
}

class Task3 {
	public void process() {
		try {
			Thread.sleep(100);
		} catch (InterruptedException e) {
		}
		System.out.printf("[%s] work of %s has done.\n", Thread.currentThread().getName(),
				UserContext.getCurrentUser());
	}
}

```



# 工具

1. Maven，Maven是一个自动构建和管理Java项目的管理软件，他定义了一套用于Java项目开发的流程，定义了Java项目的目录结构，使用Maven构建项目可以在pom.xml中进行管理项目运行时的环境，Maven维护了一个库仓库，可以对项目依赖环境进行自动安装和管理





# Web 开发

## JavaBean

是一个对数据进行封装的Java类，方便数据的传输。里面对实例变量设置了读写属性（getter和setter方法）

```java
public class person{
	private String name ;
	
	public String getName(){
		return name ;
	}//读属性
	public void setName(String name){
		this.name = name ;
	}//写属性
}
```



## BS架构

### HTTP请求

HTTP请求和响应都由HTTP Header和HTTP Body构成，其中HTTP Header每行都以`\r\n`结束。如果遇到两个连续的`\r\n`，那么后面就是HTTP Body。浏览器读取HTTP Body，并根据Header信息中指示的`Content-Type`、`Content-Encoding`等解压后显示网页、图像或其他内容。

通常浏览器获取的第一个资源是HTML网页，在网页中，如果嵌入了JavaScript、CSS、图片、视频等其他资源，浏览器会根据资源的URL再次向服务器请求对应的资源。

1. HTML是用来定义网页的文本，HTTP是在网络上传输HTML的协议，用于浏览器和服务器的通信

2. Browser请求页面流程

   1. 与服务器简历TCP连接
   2. 发送HTTP请求
   3. 收取HTTP响应，把网页在浏览器中显示出来

3. HTTP请求头

   ```
   客户端请求HTTP头
   
   GET /home.html HTTP/1.1
   Host: developer.mozilla.org
   	Host表示浏览器正在请求的域名
   User-Agent: Mozilla/5.0 (Macintosh; Intel Mac OS X 10.9; rv:50.0) Gecko/20100101 Firefox/50.0  
   	标识客户端本身
   Accept: text/html,application/xhtml+xml,application/xml;q=0.9,*/*;q=0.8
   	表示浏览器能接收的资源类型
   Accept-Language: en-US,en;q=0.5
   	表示浏览器偏好的语言
   Accept-Encoding: gzip, deflate, br
   	表示浏览器可以支持的压缩类型
   Referer: https://developer.mozilla.org/testpage.html
   Connection: keep-alive
   Upgrade-Insecure-Requests: 1
   If-Modified-Since: Mon, 18 Jul 2016 02:36:04 GMT
   If-None-Match: "c561c68d0ba92bbeb8b0fff2a9199f722e3a621a"
   Cache-Control: max-age=0
   ```

   ```
   服务器响应HTTP头
   
   HTTP/1.1 200 OK
   Content-Type: text/html
   	表示该响应内容的类型
   Content-Length: 21932
   	表示该响应内容的长度（字节数）
   Content-Encoding: gzip
   	表示该响应压缩算法
   Cache-Control: max-age=300
   	指示客户端应如何缓存
   
   <html>...网页数据...
   ```

   ```
   响应代码
   
   200 OK：表示成功；
   301 Moved Permanently：表示该URL已经永久重定向；
   302 Found：表示该URL需要临时重定向；
   304 Not Modified：表示该资源没有修改，客户端可以使用本地缓存的版本；
   400 Bad Request：表示客户端发送了一个错误的请求，例如参数无效；
   401 Unauthorized：表示客户端因为身份未验证而不允许访问该URL；
   403 Forbidden：表示服务器因为权限问题拒绝了客户端的请求；
   404 Not Found：表示客户端请求了一个不存在的资源；
   500 Internal Server Error：表示服务器处理时内部出错，例如因为无法连接数据库；
   503 Service Unavailable：表示服务器此刻暂时无法处理请求。
   ```

4. HTTP协议基于TCP协议，可以通过实现TCP的Socket编程实现HTTP协议，实现服务器端框架

   ```java
   //使用TCP的Socket编程实现HTTP协议
   
   package myPackage;
   
   import java.io.BufferedReader;
   import java.io.BufferedWriter;
   import java.io.IOException;
   import java.io.InputStream;
   import java.io.InputStreamReader;
   import java.io.OutputStream;
   import java.io.OutputStreamWriter;
   import java.net.ServerSocket;
   import java.net.Socket;
   import java.nio.charset.StandardCharsets;
   
   public class Server {
   	public static void main(String[] args) throws IOException{
   		try (ServerSocket ss = new ServerSocket(8081)) {
   			System.out.println("Server running");
   			for(;;) {
   				Socket sock = ss.accept() ;
   				
   				System.out.println("connect from " + sock.getRemoteSocketAddress() ) ;
   				Thread t = new Handler(sock) ;
   				t.start();
   			}
   		}
   		
   	}
   }
   class Handler extends Thread{
   	Socket sock ;
   	
   	public Handler(Socket sock) {
   		this.sock = sock ;
   	}
   	
   	public void run() {
   		try(InputStream input = this.sock.getInputStream() ){
   			try( OutputStream output = this.sock.getOutputStream() ){
   				handle(input, output ) ;
   			}
   		} catch (IOException e) {
   			// TODO Auto-generated catch block
   			e.printStackTrace();
   		}
   		System.out.println("client disconnect") ;
   	}
   	
   	private void handle(InputStream input, OutputStream output)throws IOException{
   		System.out.println("process new http request") ;
   		var reader = new BufferedReader(new InputStreamReader(input, StandardCharsets.UTF_8)) ;
   		var writer = new BufferedWriter(new OutputStreamWriter(output, StandardCharsets.UTF_8)) ;
   		
   		boolean requestOk = false ;
   		
   		String first = reader.readLine() ;
   		if( first.startsWith("GET / HTTP/1.")) {
   			requestOk = true ;
   		}
   		for(;;) {
   			String header = reader.readLine() ;
   			if( header.isEmpty() ) {
   				break ;
   			}
   			System.out.println(header) ;
   		}
   		
   		System.out.println(requestOk? "Ok":"Error") ;
   		if( !requestOk) {
   
   			writer.write("HTTP/1.0 404 Not Found\r\n") ;
   			writer.write("Content-Length: 0 \r\n") ;
   			writer.write("\r\n") ;
   			writer.flush() ;
   		}else {
   			String data = "<html><body><h1>Hello, world</h1></body></html>" ;
   			int length = data.getBytes(StandardCharsets.UTF_8).length ;
   			writer.write("HTTP/1.0 200 OK\r\n") ;
   			writer.write("Connection: close\r\n") ;
   			writer.write("content-Type: text/html\r\n") ;
   			writer.write("Content-Length: "+ length + "\r\n") ;
   			writer.write("\r\n") ;
   			writer.write(data) ;
   			writer.flush() ;
   		}
   	}
   }
   
   ```

5. Web服务器（Tomcat）处理HTTP协议的解析，减少了开发人员处理HTTP协议解析的底层代码，更加关注于HTTP请求本身。我们实现Servlet API接口，来实现逻辑

   Servlet容器运行的Servlet的特点：

   1. 只能通过Servlet容器创建Servlet实例
   2. Servlet容器只会给每个Servlet类创建唯一一个实例
   3. Servlet容器使用多线程执行doGet()或者doPost()方法

   Servlet的注意事项

   1. Servlet的实例变量会被多线程访问，要注意线程安全

   2. HttpServletRequest和HttpServletResponse实例是由Sevlet容器传入的局部变量，他只能被当前线程访问，不存在多线程访问的问题

   3. 在doGet()或doPost()方法中，如果使用了ThreadLocal但是没有清理，那么他的状态可能影响下次的某个请求，因为Servlet容器很可能使用线程池实现线程复用

   4. 一个Webapp完全可以有多个Servlet，分别映射不同的路径，通过注解标注路径。浏览器发出的HTTP请求总是由Web Server先接收，然后，根据Servlet配置的映射，不同的路径转发到不同的Servlet。这种根据路径转发的功能我们一般称为Dispatch。映射到`/`的`IndexServlet`比较特殊，它实际上会接收所有未匹配的路径，相当于`/*`。路径映射代码如下

      ```java
      String path = ...
      if (path.equals("/hello")) {
          dispatchTo(helloServlet);
      } else if (path.equals("/signin")) {
          dispatchTo(signinServlet);
      } else {
          // 所有未匹配的路径均转发到"/"
          dispatchTo(indexServlet);
      }
      ```

### HttpServletRequest

HttpServletRequest封装了一个HTTP请求，它实际上是从ServletRequest继承而来。HttpServletRequest提供的接口方法可以拿到HTTP请求的几乎全部信息，常用的方法

```
getMethod()：返回请求方法，例如，"GET"，"POST"；
getRequestURI()：返回请求路径，但不包括请求参数，例如，"/hello"；
getQueryString()：返回请求参数，例如，"name=Bob&a=1&b=2"；
getParameter(name)：返回请求参数，GET请求从URL读取参数，POST请求从Body中读取参数；
getContentType()：获取请求Body的类型，例如，"application/x-www-form-urlencoded"；
getContextPath()：获取当前Webapp挂载的路径，对于ROOT来说，总是返回空字符串""；
getCookies()：返回请求携带的所有Cookie；
getHeader(name)：获取指定的Header，对Header名称不区分大小写；
getHeaderNames()：返回所有Header名称；
getInputStream()：如果该请求带有HTTP Body，该方法将打开一个输入流用于读取Body；
getReader()：和getInputStream()类似，但打开的是Reader；
getRemoteAddr()：返回客户端的IP地址；
getScheme()：返回协议类型，例如，"http"，"https"；
```

### HttpServletResponse

HttpServletResponse封装了一个HTTP响应，由于HTTP响应必须先发送Header，再发送Body，所以，操作`HttpServletResponse`对象时，必须先调用设置Header的方法，最后调用发送Body的方法。

```
setStatus(sc)：设置响应代码，默认是200；
setContentType(type)：设置Body的类型，例如，"text/html"；
setCharacterEncoding(charset)：设置字符编码，例如，"UTF-8"；
setHeader(name, value)：设置一个Header的值；
addCookie(cookie)：给响应添加一个Cookie；
addHeader(name, value)：给响应添加一个Header，因为HTTP协议允许有多个相同的Header；
```

但是，写入完毕后调用`flush()`却是必须的，因为大部分Web服务器都基于HTTP/1.1协议，会复用TCP连接。如果没有调用`flush()`，将导致缓冲区的内容无法及时发送到客户端。此外，写入完毕后千万不要调用`close()`，原因同样是因为会复用TCP连接，如果关闭写入流，将关闭TCP连接，使得Web服务器无法复用此TCP连接。

**有了`HttpServletRequest`和`HttpServletResponse`这两个高级接口，我们就不需要直接处理HTTP协议。注意到具体的实现类是由各服务器提供的，而我们编写的Web应用程序只关心接口方法，并不需要关心具体实现的子类。**

### 转发和重定向

**重定向**是一种web服务器升级之后地址发生改变，让浏览器可以重新获取改变之后的地址访问的一种机制。浏览器发送Get /hi请求，会流向重定向的Servlet，他将返回一个

```
HTTP/1.1 302 Found
Location: /hello
```

的响应，浏览器收到302响应之后重新发送Get /hello请求从而获得改变的资源。观察浏览器可以发现浏览器发送了两次Get请求

**转发**是服务器处理逻辑发生变化，地址发生改变，当一个Get /hi 的请求到达，处理这个请求的Servlet会将处理的参数转发给另外一个Servlet处理之后返回给浏览器。

转发和重定向的区别在于转发是在服务器内部完成的，服务器只发送了一个请求。

### Session 和Cookie

Session是一种基于唯一ID识别用户身份的机制。每个用户第一次访问服务器之后，会自动获得一个Session ID，并以Cookie的方式发送给浏览器，浏览器在后续访问中总是附带此Cookie，这样服务器就可以识别用户身份。如果用户在一段时间内没有访问服务器，那么Session会自动失效。

在Servlet中第一次调用`**req.getSession()**`时，Servlet容器自动创建一个Session ID，然后通过一个名为`JSESSIONID`的Cookie发送给浏览器

![](https://www.liaoxuefeng.com/files/attachments/1328781362987073/l)

JSESSIONID注意事项

1. JSESSIONID`是由Servlet容器自动创建的，目的是维护一个浏览器会话，它和我们的登录逻辑没有关系；

2. 登录和登出的业务逻辑是我们自己根据`HttpSession`是否存在一个`"user"`的Key判断的，登出后，Session ID并不会改变；

3. 即使没有登录功能，仍然可以使用`HttpSession`追踪用户，例如，放入一些用户配置信息等。

使用Session的问题

1. 由于服务器把Session放在内存，在内存不足时，就会把部分不活动的Session序列化到磁盘上，这样大大降低了服务器的运行效率，因此放入Session的对象要尽可能小

2. 通常在构建服务器集群的时候，我们会使用反向代理作为网站的入口。在使用轮询进行请求分配的时候，一个在Server 1运行的Session不在Server 2 上，造成轮询分配到Session 2时用户登录状态会变成未登录。

   解决这种登录状态变化的方式由两种

   1. 在所有Web Server之间进行Session复制，但是这样严重消耗网络带宽，并且每个Web Server的内存均存储所有用的Session，内存使用率很低
   2. 粘滞会话：反向代理服务器维护一个JSESSION和Web Server的映射，将请求发送到对应的Web Server上

   无论采用什么机制，使用Session机制的服务器集群很难扩展，因此Session适用于中小型Web 应用



Servlet提供的HttpSession本质上是通过一个名为JSESSIONID的Cookie来跟踪用户会话的，除了这个名称以外，其他名称的Cookie我们可以任意使用

创建一个新的Cookie时，除了指定名称和值意外，通常要设置setPath("/")，浏览器根据此前缀决定是否发送Cookie，比如设置setPath("/user")，之后用户访问带有user的地址的时候浏览器才会发送Cookie。如果浏览器发送的时Https请求，服务器返回的Cookie还要设置SetSecure(true)，否则浏览器不会发送Cookie

浏览器发送请求时是否发送Cookie，取决于Cookie中是否有下面的要求：

1. URL前缀设置发送Cookie的地址
2. Cookie的有效期内
3. Cookie设置了secure时必须以https访问

## MVC架构

把Servlet看作控制器负责逻辑处理，Jsp看作视图，JavaBean看作模型的架构。这样的好处是Controller专注于业务处理，他的处理结果时Model，Model可以是一个JavaBean，也可以是一个包含多个对象的Map，Controller只负责把Model传递给View，View只负责把Model渲染出来，这样，三者职责明确，且开发更简单。基于Servlet和Jsp的MVC架构广泛应用，但是还不够灵活，还有Spring MVC开发。

## Filter过滤器

Filter可以有针对性地拦截或者放行HTTP请求。

Filter是一种对HTTP请求进行预处理的组件，它可以构成一个处理链，使得公共处理代码能集中到一起；

Filter适用于日志、登录检查、全局设置等；

设计合理的URL映射可以让Filter链更清晰。

Filter实现缓存，让重复请求不会重复计算

## Listenner监听器

任何标注为`@WebListener`，且实现了特定接口的类会被Web服务器自动初始化。上述`AppListener`实现了`ServletContextListener`接口，它会在整个Web应用程序初始化完成后，以及Web应用程序关闭后获得回调通知。我们可以把初始化数据库连接池等工作放到`contextInitialized()`回调方法中，把清理资源的工作放到`contextDestroyed()`回调方法中，因为Web服务器保证在`contextInitialized()`执行后，才会接受用户的HTTP请求。

很多第三方Web框架都会通过一个`ServletContextListener`接口初始化自己。

除了`ServletContextListener`外，还有几种Listener：

- HttpSessionListener：监听HttpSession的创建和销毁事件；
- ServletRequestListener：监听ServletRequest请求的创建和销毁事件；
- ServletRequestAttributeListener：监听ServletRequest请求的属性变化事件（即调用`ServletRequest.setAttribute()`方法）；
- ServletContextAttributeListener：监听ServletContext的属性变化事件（即调用`ServletContext.setAttribute()`方法）；

## Nginx反向代理Tomcat集群

反向代理是服务端代理，对客户端透明，客户端访问服务端，先经过反向代理服务器，由反向代理服务器分发请求

正向代理是客户端代理，对服务器透明，服务端访问客户端，先经过代理服务器处理。

反向代理作用：缓存，负载均衡，访问控制。



# Spring开发

**Spring解决循环依赖**

到这里，Spring整个解决循环依赖问题的实现思路已经比较清楚了。对于整体过程，读者朋友只要理解两点：

- Spring是通过递归的方式获取目标bean及其所依赖的bean的；
- Spring实例化一个bean的时候，是分两步进行的，首先实例化目标bean，然后为其注入属性。

结合这两点，也就是说，Spring在实例化一个bean的时候，是首先递归的实例化其所依赖的所有bean，直到某个bean没有依赖其他bean，此时就会将该实例返回，然后反递归的将获取到的bean设置为各个上层bean的属性的。

![img](https://pic1.zhimg.com/80/v2-abe8d96f198a33fcfd51bb2108b00004_720w.jpg)

```java
Class<A> 表示A类类类型
Class<?> 表示任意类的类类型
```



Spring Framework包含下面几个模块

- 支持IoC和AOP的容器；
- 支持JDBC和ORM的数据访问模块；
- 支持声明式事务的模块；
- 支持基于Servlet的MVC开发；
- 支持基于Reactive的Web开发；
- 以及集成JMS、JavaMail、JMX、缓存等其他模块。

## 概念

容器：一种为某种特定组件的运行提供必要支持的软件环境。容器除了提供一个组件运行环境外，还提供了许多底层服务，比如Servlet容器提供了TCP连接，解析HTTP协议等复杂的服务。

Spring的核心就是提供了一个IoC容器，他可以管理所有轻量级的JavaBean组件，提供的地层服务包括组件的生命周期管理、配置和组装服务、AOP支持，以及建立在AOP基础上的声明式事务服务等。

**IoC控制反转**：传统的应用程序，创建一个新实例的控制权在程序本身，同时，创建一个新实例的依赖也需要开发人员维护（比如创建一个数据库连接的实例，必须要先创建数据库连接配置的实例，传递给数据库连接实例）。这样程序的组件的创建由开发人员控制，而且开发人员还要知道创建这些组件的依赖，增加开发难度，同时应用程序本身控制组件创建会造成多次创建的开销（比如两个访问数据库的类，他们都要自己创建一个数据库连接组件，这样就要创建两个，而实际上这可以创建一个进行复用）。控制反转IoC就是把创建组件的控制权从应用程序反转到IoC容器，所有组件的创建和配置不由应用程序控制，而是由IoC容器负责，这样应用程序只需要直接使用已经配置好了和创建好了的组件。组件管理交给了IoC容器，那么怎么返回给需要使用的类，就需要**依赖注入**DI，比如通过setDataSource()方法去注入一个数据库连接实例。这样，通过控制反转和依赖注入，一个类不用new一个创建一个实例，只需要通过IoC容器注入一个实例

**控制反转和依赖注入的好处：**将组件的创建和配置 与组件的使用分离，并且IoC容器负责管理组件的生命周期

1. 使得类不必关心如何创建一个实例，从而减少对实例的依赖的关心
2. 依赖注入可以让一个实例得以共享
3. 测试一个组件的时候，可以更加容易

**IoC控制反转的核心问题：**

	1. 谁负责创建组件
	1. 谁负责根据依赖关系组装组件
	1. 销毁时如何根据依赖顺序正确销毁

**依赖注入方式**：

Spring依赖注入支持两种注入方式：构造方法注入和属性setInstance注入

**无侵入注入**

Spring依赖注入是一种无侵入注入，指的是应用程序组件不用实现Spring的特定的接口，这样设计的好处是

1. 应用程序既可以在Spring的IoC容器中运行，也可以让开发人员自己组装配置进行注入
2. 测试的时候不依赖于Spring容器，可以进行单独测试，提高开发效率。

## Bean的创建和定制(IoC和DI)

### Bean的创建和注入

**通过XML配置文件创建和管理创建组件和各个组件的依赖关系**

Spring通过读入XML文件使用反射完成组件的创建

```xml
<beans>
    <bean id="dataSource" class="HikariDataSource" />
    	<property name = "username" value = "root"/>
    	<property name = "password" value = "passwword"
	</beans>
    <bean id="bookService" class="BookService">
        <property name="dataSource" ref="dataSource" />
    </bean>
    <bean id="userService" class="UserService">
        <property name="dataSource" ref="dataSource" />
    </bean>
</beans>
```

上面的配置文件创建了三个JavaBean组件，id为dataSource的组件被通过setDataSource注入到bookService组件，同样，被注入到userService组件的dataSource方法。注入boolean、int、String等数据类型，使用value

上面XML配置的Java代码如下

```java
HikariDataSource dataSource = new HikariDataSource() ;
BookService bookService = new BookService( dataSouce ) ;
```

配置好上面的XML之后，使用下面的语句来创建Spring IoC容器，加载配置文件

```java
ApplicationContext context = new ClassPathXmlApplicationContext("application.xml");
```

从容器中获得实例的方式通过以下的语句

```java
UserService userService = context.getBean(UserService.class);
```

完整的main方法

```java
public class Main {
    public static void main(String[] args) {
        ApplicationContext context = new ClassPathXmlApplicationContext("application.xml");
        UserService userService = context.getBean(UserService.class);
        User user = userService.login("bob@example.com", "password");
        System.out.println(user.getName());
    }
}
```

上面我们使用了Spring的一种IoC容器ApplicationContext，他是一个接口，由很多实现，我们这里使用的是ClassPathXmlApplicationContext实现。同时Spring还有一种IoC容器BeanFactory，和Application不同在于他是在请求一个Bean实例的时候才创建那个Bean，而ApplicationContext是一次性创建所有的Bean。实际上ApplicationContext是继承了BeanFactory的接口，提供了一些额外的功能，比如国际化支持、事件和通知机制等，我们一般使用的是ApplicationContext

**通过注解创建和管理创建组件和各个组件的依赖关系**

使用XML配置文件比较繁琐，一种方式时使用注解

- 每个Bean被标注为`@Component`并正确使用`@Autowired`注入；
- 配置类被标注为`@Configuration`和`@ComponentScan`；
- 所有Bean均在指定包以及子包内。

```java
@Component
public class MailService {
    ...
}

@Component
public class UserService {
    @Autowired
    MailService mailService;

    ...
}


@Configuration
@ComponentScan
public class AppConfig {
    public static void main(String[] args) {
        ApplicationContext context = new AnnotationConfigApplicationContext(AppConfig.class);
        UserService userService = context.getBean(UserService.class);
        User user = userService.login("bob@example.com", "password");
        System.out.println(user.getName());
    }
}
```

@Configuration，在使用注解创建IoC容器时（AnnotationConfigApplication）必须要这个注解标记一个配置类，

@ComponentScan，告诉容器自动搜索当前类所在的包以及子包，把所有标注为@Component的Bean自动创建出来，并根据@Autowired进行装配

@Component，被扫描到的类被创建一个Bean，Bean的id时首字母小写的类名

@Autowired，可以用来修饰构造方法，字段等，把指定类型的Bean装配到类里面

### Bean的定制

**Scope.Prototype原型Bean**

@Bean创建的是一个单例，这个单例在容器初始化时创建，在容器销毁时销毁。而Prototype原型Bean是一种在需要添加时才创建的Bean。需要在@Component 下注解@Scope(ConfigurableBeanFactory.SCOPE_PROTOTYPE)

```java
@Component
@Scope(ConfigurableBeanFactory.SCOPE_PROTOTYPE)
public class MainlSession{
	...
}
```

**注入List并标记注入顺序**

有时候需要注入一组继承了同一接口的Bean，这时候使用List<Validator> 类型来告诉Spring容器把所有Validator实现注入进来，可以使用@Order指定注入顺序

```java
public interface Validator {
    void validate(String email, String password, String name);
}

@Component
@Order(1)
public class EmailValidator implements Validator {
    public void validate(String email, String password, String name) {
        if (!email.matches("^[a-z0-9]+\\@[a-z0-9]+\\.[a-z]{2,10}$")) {
            throw new IllegalArgumentException("invalid email: " + email);
        }
    }
}

@Component
@Order(2)
public class PasswordValidator implements Validator {
    public void validate(String email, String password, String name) {
        if (!password.matches("^.{6,20}$")) {
            throw new IllegalArgumentException("invalid password");
        }
    }
}

@Component
@Order(3)
public class NameValidator implements Validator {
    public void validate(String email, String password, String name) {
        if (name == null || name.isBlank() || name.length() > 20) {
            throw new IllegalArgumentException("invalid name: " + name);
        }
    }
}



@Component
public class Validators {
    @Autowired
    List<Validator> validators; //注入一组Validator类型的Bean

    public void validate(String email, String password, String name) {
        for (var validator : this.validators) {
            validator.validate(email, password, name);
        }
    }
}
```

**可选注入**

一般情况下当我们标记了一个@Autowired后，如果Spring没有找到对应类型的Bean，就会抛出一个NoSuchBeanDefinitionException异常，可以给Autowired添加一个required=false参数，告诉Spring如果找不到那个Bean就忽略。这种方法适用于有定义就是用定义，没有定义就使用默认值

```java
@Component
public class MailService {
    @Autowired(required = false)
    ZoneId zoneId = ZoneId.systemDefault();
    ...
}
```

**创建第三方Bean**

IoC会在配置文件和他的子包中寻找@Component注解的类创建Bean，但是如果一个类不在这个包下面，那么可以使用@Bean在配置文件里面创建一个Bean。这种创建的Bean依然是单例的

```
@Configuration
@ComponentScan
public class AppConfig{
	@Bean
	ZoneId createZoneId(){
		return ZoneId.of("Z") ;
	}
}
```

**初始化和销毁**

一个Bean在注入必要的以来以后，需要进行初始化（监听消息等），在容器关闭以后，需要清理资源（关闭连接池等）

```java
//添加init()和shutdown()方法注解依赖
<dependency>
    <groupId>javax.annotation</groupId>
    <artifactId>javax.annotation-api</artifactId>
    <version>1.3.2</version>
</dependency>


@Component
public class MailService {
    @Autowired(required = false)
    ZoneId zoneId = ZoneId.systemDefault();

    @PostConstruct
    public void init() {  //初始化Bean
        System.out.println("Init mail service with zoneId = " + this.zoneId);
    }

    @PreDestroy
    public void shutdown() { //销毁Bean
        System.out.println("Shutdown mail service");
    }
}
```

Spring容器会对上面的Bean进行下面的初始化流程

1. 调用构造方法创建MailService
2. 根据Autowired注入
3. 调用标记有PostConstruct的init()方法初始化

Spring容器在销毁时，会先调用@Predestroy注解的shutdown方法

**使用别名**

默认情况下容器内一个类型只有一个实例，但是有时候我们需要多个实例（比如连接多个数据库），我们可以使用@Bean("name")或者@Bean@Qualifier("name") 标记名字的方式来创建，在注入的时候添加@Qualifier("name")的方式来注入

```
//创建多个同类型Bean使用@Qualifier("name")标记名字
@Configuration
@ComponentScan
public class AppConfig {
    @Bean
    @Primary // 指定为主要Bean
    @Qualifier("z")
    ZoneId createZoneOfZ() {
        return ZoneId.of("Z");
    }

    @Bean
    @Qualifier("utc8")
    ZoneId createZoneOfUTC8() {
        return ZoneId.of("UTC+08:00");
    }
}

//注入Bean的时候使用@Qualifier("name")的方式注入特定名字的Bean
@Component
public class MailService {
	@Autowired(required = false)
	@Qualifier("z") // 指定注入名称为"z"的ZoneId
	ZoneId zoneId = ZoneId.systemDefault();
    ...
}
```

**使用FactoryBean创建Bean**

使用工厂模式创建对象，可以实现调用方面向抽象编程，可以实现缓存复用

```java
@Component
public class ZoneIdFactoryBean implements FactoryBean<ZoneId> {

    String zone = "Z";

    @Override
    public ZoneId getObject() throws Exception {
        return ZoneId.of(zone);
    }

    @Override
    public Class<?> getObjectType() {
        return ZoneId.class;
    }
}
```

当一个Bean实现了`FactoryBean`接口后，Spring会先实例化这个工厂，然后调用`getObject()`创建真正的Bean。`getObjectType()`可以指定创建的Bean的类型，因为指定类型不一定与实际类型一致，可以是接口或抽象类。

### 使用Resource

在Java程序中，我们经常会读取配置文件、资源文件等，我们也可以用注入的方式来打开文件的inputStream，读取文件

Spring提供了一个org.springframework.core.io.Resource（注意不是javax.annotation.Resource），它可以像String、int等一样使用Value注入

```java
@Component
public class AppService {
    @Value("classpath:/logo.txt")
    private Resource resource;

    private String logo;

    @PostConstruct
    public void init() throws IOException {
        try (var reader = new BufferedReader(
                new InputStreamReader(resource.getInputStream(), StandardCharsets.UTF_8))) {
            this.logo = reader.lines().collect(Collectors.joining("\n"));
        }
    }
}
```

注入Resource最常用的方式是通过classpath，类似于**classpath:/log.txt**表示在classpath中搜索log.txt文件，当然也可以直接给出绝对地址。这里的classpath指的是Maven结构中保存数据文件的地址。

### 注入配置

Java程序的配置总是以key=value的形式保存在.properties文件中

我们要获得配置文件，可以使用@Resource注入的方法读取，但是这样比较繁琐，Spring提供了@PropertySource注解来自动读取配置文件，我们只需要在配置类上添加@PropertySource("app.properties")来自动读取配置文件

1. 通过@PropertySource注入

```java
@Configuration
@ComponentScan
@PropertySource("app.properties") // 表示读取classpath的app.properties
public class AppConfig {
    @Value("${app.zone:Z}")
    String zoneId;

    @Bean
    ZoneId createZoneId() {
        return ZoneId.of(zoneId);
    }
}
```

Spring读取到@PropertySource注解之后，就会自动读取这个文件，然后我们使用@Value("${app.zone:z}") 来注入，其中如果app.zone不存在 ，那么会使用默认值z注入

2. 使用一个独立的JavaBean持有所有属性，然后在其他Bean中以#{bean.property}注入

```java
@Component
public class SmtpConfig {
    @Value("${smtp.host}")
    private String host;

    @Value("${smtp.port:25}")
    private int port;

    public String getHost() {
        return host;
    }

    public int getPort() {
        return port;
    }
}

@Component
public class MailService {
    @Value("#{smtpConfig.host}")
    private String smtpHost;

    @Value("#{smtpConfig.port}")
    private int smtpPort;
}
```

其中#{smtpConfig.host}表示从smtpConfig的Bean中读取host属性，也就是调用getHost()方法

### 使用条件装配

#### 使用环境进行条件装配

Spring为应用程序准备了Profile这一概念，用来表示不同的环境，例如我们可以用native、test、production分别定义开发、测试、生产三个环境

```java
@Configuration
@ComponentScan
public class AppConfig {
    @Bean
    @Profile("!test") // Profile({ "test", "master" }) 
    ZoneId createZoneId() {
        return ZoneId.systemDefault();
    }

    @Bean
    @Profile("test")
    ZoneId createZoneIdForTest() {
        return ZoneId.of("America/New_York");
    }
}
```

上面如果环境为test就装配createZoneId()，否则使用createZoneIdForTest

配置profile环境，只需要在运行时添加如下参数

```
-Dspring.profiles.active=test,master
```

#### 使用Conditional

```java
@Component
@Conditional(OnSmtpEnvCondition.class)
public class SmtpMailService implements MailService {
    ...
}


public class OnSmtpEnvCondition implements Condition {
    public boolean matches(ConditionContext context, AnnotatedTypeMetadata metadata) {
        return "true".equalsIgnoreCase(System.getenv("smtp"));
    }
}
```

Spring只提供了@Conditional注解，具体判断逻辑还是需要我们自己实现

Spring Boot提供了更多简单的条件注解

1. 如果配置文件中存在app.stmp=true就创建

   ```java
   @Component
   @ConditionalOnProperty(name="app.smtp", havingValue="true")
   public class MailService {
       ...
   }
   ```

2. 如果当前classpath中存在类javax.mail.Transport就创建

   ```java
   @Component
   @ConditionalOnClass(name = "javax.mail.Transport")
   public class MailService {
       ...
   }
   ```

## AOP面向切面编程

面向对象编程OOP把系统看成时多个对象的交互，实现数据封装、继承、多态，而AOP把系统分解为不同的关注点（切面）。

在OOP中，要实现一个类，除了业务逻辑，还需要安全检查、日志记录、事务处理等，如果按照OOP，一个BookService类可能是下面

```java
public class BookService {
    public void createBook(Book book) {
        securityCheck();
        Transaction tx = startTransaction();
        try {
            // 核心业务逻辑
            tx.commit();
        } catch (RuntimeException e) {
            tx.rollback();
            throw e;
        }
        log("created book: " + book);
    }
}
```

这样的类，不仅关注业务逻辑，还关注事务检查、安全管理和日志记录，而后面三个功能总是重复的，在很多类都是重复的，使用OOP难以将这些重复的代码进行模块化。

一种解决办法时使用代理模式，也就是为类接口添加事务检查、安全管理和日志记录，但是这种模式需要抽取接口，比较麻烦

### **AOP原理**

AOP实际上也是一种代理，他拦截业务代码实现安全检查、事务管理和日志记录等。Java实现AOP有三种方式

1. 编译期：通过扩展编译器，在编译器将切面调用编译进字节码，这种需要使用关键字来扩展编译器，AspectJ扩展了Java编译器，使用aspect来实现切面织入
2. 类加载器：在目标类被装载到JVM时，通过一个特殊的类加载器，对目标类的字节码重新增强
3. 运行期：目标对象和切面都是普通的类，通过JVM的动态代理功能或者第三方库实现运行期动态织入

**Spring AOP动态代理的两种方式**

JDK动态代理：利用反射机制生成一个实现代理接口的匿名类，在调用具体方法前调用InvokeHandler来处理。
CGlib动态代理：利用ASM（开源的Java字节码编辑库，操作字节码）开源包，将代理对象类的class文件加载进来，通过修改其字节码生成子类来处理。

区别：JDK代理只能对实现接口的类生成代理；CGlib是针对类实现代理，对指定的类生成一个子类，并覆盖其中的方法，这种通过继承类的实现方式，不能代理final修饰的类。

总结：1.JDK代理使用的是反射机制实现aop的动态代理，CGLIB代理使用字节码处理框架asm，通过修改字节码生成子类。所以jdk动态代理的方式创建代理对象效率较高，执行效率较低，cglib创建效率较低，执行效率高；2.JDK动态代理机制是委托机制，具体说动态实现接口类，在动态生成的实现类里面委托hanlder去调用原始实现类方法，CGLIB则使用的继承机制，具体说被代理类和代理类是继承关系，所以代理类是可以赋值给被代理类的，如果被代理类有接口，那么代理类也可以赋值给接口。


Spring的AOP实现是基于JVM的动态代理。

AOP优缺点：AOP对于解决特定的问题，比如事务管理非常有用，这是因为分散在各处的事务代码基本相同，而且他们的参数固定。而另外一些特定问题，比如日志记录，就不容器，因为打印日志，需要捕获局部i变量，而使用AOP我们只能打印出固定格式的日志。

### **Spring的实现装配AOP**  

#### 使用execution(* xxx.Xyz.*(..) ) 装配AOP

```java
@Aspect
@Component
public class LoggingAspect {
    // 在执行UserService的每个方法前执行:
    @Before("execution(public * com.itranswarp.learnjava.service.UserService.*(..))")
    public void doAccessCheck() {
        System.err.println("[Before] do access check...");
    }

    // 在执行MailService的每个方法前后执行:
    @Around("execution(public * com.itranswarp.learnjava.service.MailService.*(..))")
    public Object doLogging(ProceedingJoinPoint pjp) throws Throwable {
        System.err.println("[Around] start " + pjp.getSignature());
        Object retVal = pjp.proceed();
        System.err.println("[Around] done " + pjp.getSignature());
        return retVal;
    }
}

@Configuration
@ComponentScan
@EnableAspectJAutoProxy
public class AppConfig {
    ...
}
```

Spring实现AOP装载需要三步

1. 定义执行方法，并在方法上通过AspectJ的注解告诉Spring应该在何处调用此方法；
2. 标记`@Component`和`@Aspect`；
3. 在`@Configuration`类上标注`@EnableAspectJAutoProxy`。

**Spring实现AOP的具体方式**

Spring在实现在普通类UserService的方法执行前进行权限检查的AOP的注入的具体方式是，Spring使用CGLIB代码生成包 动态创建UserService的子类，他持有UserService和Aspect的实例，创建了UserServiceAopProxy的Bean，实际获取的UserService是UserServiceAopProxy。UserServiceAopProxy创建的代码

```java
public UserServiceAopProxy extends UserService {
    private UserService target;
    private LoggingAspect aspect;

    public UserServiceAopProxy(UserService target, LoggingAspect aspect) {
        this.target = target;
        this.aspect = aspect;
    }

    public User login(String email, String password) {
        // 先执行Aspect的代码:
        aspect.doAccessCheck();
        // 再执行UserService的逻辑:
        return target.login(email, password);
    }

    public User register(String email, String password, String name) {
        aspect.doAccessCheck();
        return target.register(email, password, name);
    }

    ...
}
```

Spring对接口类型使用JDK动态代理，对普通类使用CGLIB创建子类，如果一个类是final类型，那么SPring无法为他创建子类。

**Spring的AOP拦截器类型**

- @Before：这种拦截器先执行拦截代码，再执行目标代码。如果拦截器抛异常，那么目标代码就不执行了；
- @After：这种拦截器先执行目标代码，再执行拦截器代码。无论目标代码是否抛异常，拦截器代码都会执行；
- @AfterReturning：和@After不同的是，只有当目标代码正常返回时，才执行拦截器代码；
- @AfterThrowing：和@After不同的是，只有当目标代码抛出了异常时，才执行拦截器代码；
- @Around：能完全控制目标代码是否执行，并可以在执行前后、抛异常后执行任意拦截代码，可以说是包含了上面所有功能。

#### 使用注解装配AOP

上面装配AOP的方法容易在不需要AOP注解的地方进行注解，因此如何确定实际需要被AOP注解的方法上进行注解，

```java
///定义一个注解
@Target(METHOD)
@Retention(RUNTIME)
public @interface MetricTime {
    String value();
}

//定义一个切面，实现根据注解位置进行装配
@Aspect
@Component
public class MetricAspect {
    @Around("@annotation(metricTime)")
    public Object metric(ProceedingJoinPoint joinPoint, MetricTime metricTime) throws Throwable {
        String name = metricTime.value();
        long start = System.currentTimeMillis();
        try {
            return joinPoint.proceed();
        } finally {
            long t = System.currentTimeMillis() - start;
            // 写入日志或发送至JMX:
            System.err.println("[Metrics] " + name + ": " + t + "ms");
        }
    }
}

//定义需要被装配的普通类
@Component
public class UserService {
    // 监控register()方法性能:
    @MetricTime("register")
    public User register(String email, String password, String name) {
        ...
    }
    ...
}
```

### Spring使用AOP的注意事项

1. 访问被注入的Bean时，总是调用方法而非直接访问字段
2. 编写Bean时，如果可能被代理，不要写public final方法。

这是因为Spring使用AOP会调用CGLIB创建普通类的子类，而这个创建不是Java编译器正常的过程，会直接生成字节码，CGLIB创建的字节码没有初始化函数（而Java编译器过程会自动补全初始化函数），这造成了CGLIB生成的子类继承的父类的字段不会得到初始化，所以访问这些字段会NPE。但是CGLIB创建的子类因为包含了父类的实例，可以通过父类的实例调用方法得到需要的字段，那个地方时父类初始化的。而CGLIB继承的final方法因为不能被子类重写覆盖，造成他依然会访问子类继承到的字段，这些字段因为没有被 初始化，所以一定会是NPE。因此注入AOP一定时要普通方法。

## Spring连接数据库

###  **操纵数据库的各种方法**

#### **使用DriverManager**

使用DriverManager直接创建一个Connection，再从Connection使用PreparedStatement执行SQL语句

缺点是创建数据库连接是一件很消耗资源的事情，没有实现连接复用（连接池），效率低

```java
//使用DriverManager直接创建一个Connection，再从Connection使用PrepareStatement执行SQL语句
try (Connection conn = DriverManager.getConnection(JDBC_URL, JDBC_USER, JDBC_PASSWORD)) {
    try (PreparedStatement ps = conn.prepareStatement("SELECT id, grade, name, gender FROM students WHERE gender=? AND grade=?")) {
        ps.setObject(1, "M"); // 注意：索引从1开始
        ps.setObject(2, 3);
        try (ResultSet rs = ps.executeQuery()) {
            while (rs.next()) {
                long id = rs.getLong("id");
                long grade = rs.getLong("grade");
                String name = rs.getString("name");
                String gender = rs.getString("gender");
            }
        }
    }
}
```

#### 使用连接池HikariCP 的DataSource

**使用连接池创建Connection，从连接池获得一个空闲Connection，之后获得PreparedStatement执行SQL语句**

JDBC连接池有一个标准接口javax.sql.DataSouce，这个接口的实现有很多，常用的由HikariCP

使用连接池的好处在于复用数据库连接

```java
//创建数据库连接池DataSource
HikariConfig config = new HikariConfig();
config.setJdbcUrl("jdbc:mysql://localhost:3306/test");
config.setUsername("root");
config.setPassword("password");
config.addDataSourceProperty("connectionTimeout", "1000"); // 连接超时：1秒
config.addDataSourceProperty("idleTimeout", "60000"); // 空闲超时：60秒
config.addDataSourceProperty("maximumPoolSize", "10"); // 最大连接数：10
DataSource ds = new HikariDataSource(config);


//从连接池中获得一个连接Connection，再获得他的prepareStatement执行SQL语句
try (Connection conn = ds.getConnection()) { // 在此获取连接
	try (PreparedStatement ps = conn
			.prepareStatement("SELECT * FROM students WHERE grade = ? AND score >= ?")) {
		ps.setInt(1, 3); // 第一个参数grade=?
		ps.setInt(2, 90); // 第二个参数score=?
		try (ResultSet rs = ps.executeQuery()) {
			while (rs.next()) {
				students.add(extractRow(rs));
			}
		}
	}
} // 在此“释放”连接
```

#### **使用JDBCTemplate**

Spring提供了JDBCTemplate供我们操纵数据库，他包含一个DataSource的实例，可以使用JDBCTemplate获取Connection等操纵数据库。

JDBCTemplate是一个简单的ORM（关系对象映射框架）

```java
//创建JDBCTemplate的JavaBean
@Value("${jdbc.url}")
String jdbcUrl;

@Value("${jdbc.username}")
String jdbcUsername;

@Value("${jdbc.password}")
String jdbcPassword;

@Bean
JdbcTemplate createJdbcTemplate(@Autowired DataSource dataSource) {
    return new JdbcTemplate(dataSource);
}

@Bean
DataSource createDataSource() {
    HikariConfig config = new HikariConfig();
    config.setJdbcUrl(jdbcUrl);
    config.setUsername(jdbcUsername);
    config.setPassword(jdbcPassword);
    config.addDataSourceProperty("autoCommit", "true");
    config.addDataSourceProperty("connectionTimeout", "5");
    config.addDataSourceProperty("idleTimeout", "60");
    return new HikariDataSource(config);
}


//使用JDBCTemplate增删改查
//查
public User getUserById(long id) {
    return jdbcTemplate.execute((Connection conn) -> {
        try (var ps = conn.prepareStatement("SELECT * FROM users WHERE id = ?")) {
            ps.setObject(1, id);
            try (var rs = ps.executeQuery()) {
                if (rs.next()) {
                    return new User( // new User object:
                        rs.getLong("id"), // id
                        rs.getString("email"), // email
                        rs.getString("password"), // password
                        rs.getString("name")); // name
                }
                throw new RuntimeException("user not found by id.");
            }
        }
    });
}

//增
public User register(String email, String password, String name) {
    KeyHolder holder = new GeneratedKeyHolder();
    if (1 != jdbcTemplate.update((conn) -> {
        var ps = conn.prepareStatement("INSERT INTO users(email,password,name) VALUES(?,?,?)",
                                       Statement.RETURN_GENERATED_KEYS);
        ps.setObject(1, email);
        ps.setObject(2, password);
        ps.setObject(3, name);
        return ps;
    }, holder)) {
        throw new RuntimeException("Insert failed.");
    }
    return new User(holder.getKey().longValue(), email, password, name);
}

//改
public void updateUser(User user) {
    if (1 != jdbcTemplate.update("UPDATE user SET name = ? WHERE id=?", user.getName(), user.getId())) {
        throw new RuntimeException("User not found by id");
    }
}
```

#### **使用DAO**

传统多层应用程序，Web层调用业务层，业务层调用数据访问层，数据访问层负责数据增删改查，实现数据访问层的就是用JDBCTemplate实现的对数据库的操作

编写数据访问层的时候可以使用DAO模式（Data Access Object)，DAO提供了一个标准接口，对JDBCTemplate进行封装，可以方便数据库操作

```java
public abstract class AbstractDao<T> extends JdbcDaoSupport {

	@Autowired
	private JdbcTemplate jdbcTemplate;

	private String table;
	private Class<T> entityClass;
	private RowMapper<T> rowMapper;

	public AbstractDao() {
		this.entityClass = getParameterizedType();
		this.table = this.entityClass.getSimpleName().toLowerCase() + "s";
		this.rowMapper = new BeanPropertyRowMapper<>(entityClass);
	}

	@PostConstruct
	public void init() {
		super.setJdbcTemplate(jdbcTemplate);
	}

	public T getById(long id) {
		return getJdbcTemplate().queryForObject("SELECT * FROM " + table + " WHERE id = ?", this.rowMapper, id);
	}

	public List<T> getAll(int pageIndex) {
		int limit = 100;
		int offset = limit * (pageIndex - 1);
		return getJdbcTemplate().query("SELECT * FROM " + table + " LIMIT ? OFFSET ?", new Object[] { limit, offset },
				this.rowMapper);
	}

	public void deleteById(long id) {
		getJdbcTemplate().update("DELETE FROM " + table + " WHERE id = ?", id);
	}

	public RowMapper<T> getRowMapper() {
		return this.rowMapper;
	}

	@SuppressWarnings("unchecked")
	private Class<T> getParameterizedType() {
		Type type = getClass().getGenericSuperclass();
		if (!(type instanceof ParameterizedType)) {
			throw new IllegalArgumentException("Class " + getClass().getName() + " does not have parameterized type.");
		}
		ParameterizedType pt = (ParameterizedType) type;
		Type[] types = pt.getActualTypeArguments();
		if (types.length != 1) {
			throw new IllegalArgumentException(
					"Class " + getClass().getName() + " has more than 1 parameterized types.");
		}
		Type r = types[0];
		if (!(r instanceof Class<?>)) {
			throw new IllegalArgumentException(
					"Class " + getClass().getName() + " does not have parameterized type of class.");
		}
		return (Class<T>) r;
	}
}


@Component
@Transactional
public class UserDao extends AbstractDao<User> {

	public User fetchUserByEmail(String email) {
		List<User> users = getJdbcTemplate().query("SELECT * FROM users WHERE email = ?", new Object[] { email },
				(ResultSet rs, int rowNum) -> {
					return new User( // new User object:
							rs.getLong("id"), // id
							rs.getString("email"), // email
							rs.getString("password"), // password
							rs.getString("name")); // name
				});
		return users.isEmpty() ? null : users.get(0);
	}

	public User getUserByEmail(String email) {
		return getJdbcTemplate().queryForObject("SELECT * FROM users WHERE email = ?", new Object[] { email },
				(ResultSet rs, int rowNum) -> {
					return new User( // new User object:
							rs.getLong("id"), // id
							rs.getString("email"), // email
							rs.getString("password"), // password
							rs.getString("name")); // name
				});
	}

	public User login(String email, String password) {
		User user = getUserByEmail(email);
		if (user.getPassword().equals(password)) {
			return user;
		}
		throw new RuntimeException("login failed.");
	}

	public User createUser(String email, String password, String name) {
		KeyHolder holder = new GeneratedKeyHolder();
		if (1 != getJdbcTemplate().update((conn) -> {
			var ps = conn.prepareStatement("INSERT INTO users(email, password, name) VALUES(?,?,?)",
					Statement.RETURN_GENERATED_KEYS);
			ps.setObject(1, email);
			ps.setObject(2, password);
			ps.setObject(3, name);
			return ps;
		}, holder)) {
			throw new RuntimeException("Insert failed.");
		}
		if ("root".equalsIgnoreCase(name)) {
			throw new RuntimeException("Invalid name, will rollback...");
		}
		return new User(holder.getKey().longValue(), email, password, name);
	}

	public void updateUser(User user) {
		if (1 != getJdbcTemplate().update("UPDATE user SET name = ? WHERE id=?", user.getName(), user.getId())) {
			throw new RuntimeException("User not found by id");
		}
	}
}
```

#### 使用Hibernate

#### 使用JPA

#### 使用Mybatis

#### 各种数据库操作的区别

| JDBC       | Hibernate      | JPA                  | MyBatis           |
| :--------- | :------------- | :------------------- | :---------------- |
| DataSource | SessionFactory | EntityManagerFactory | SqlSessionFactory |
| Connection | Session        | EntityManager        | SqlSession        |

### 使用事务（声明式事务）

Spring事务使用的是AOP代理CGLIB生成的子类创建的Bean

```java
//原始的类
public UserService{
    public User register(String email, String password, String name){
        
    }
}

//Spring 使用CGLIB生成的AOP子类
public class UserService$$EnhancerBySpringCGLIB extends UserService {
    UserService target = ...
    PlatformTransactionManager txManager = ...

    public User register(String email, String password, String name) {
        TransactionStatus tx = null;
        try {
            tx = txManager.getTransaction(new DefaultTransactionDefinition());
            target.register(email, password, name);
            txManager.commit(tx);
        } catch (RuntimeException e) {
            txManager.rollback(tx);
            throw e;
        }
    }
    ...
}
```

Spring配置事务方法

```java
//配置类，使用EnableTransactionManagerMent启动声明式事务
@Configuration
@ComponentScan
@EnableTransactionManagement // 启用声明式
@PropertySource("jdbc.properties")
public class AppConfig {
    ...
}


//使用@Transactional添加事务支持
@Component
public class UserService {
    // 此public方法自动具有事务支持:
    @Transactional
    public User register(String email, String password, String name) {
       ...
    }
}

```

#### 事务边界

事务边界在于被注解的函数的范围，但是对于一个被事务注解的函数调用了另外一个被事务注解的函数，那么怎么界定事务的边界。无疑，我们希望被调用的函数的事务应该融合进调用函数的事务，整个只有一个事务。这涉及到事务传播

#### 事务传播

如果一个被事务注解的方法调用了另外一个被事务注解的方法，我们想把后一个方法的事务融合到前一个方法的事务中去。

Spring为事务传播提供了几个级别，默认级别是REQUIRED，这个级别的意思是，如果当前没有事务，就创建一个新事务，如果当前有事务，就加入到当前事务中执行。

**Spring提供的其他事务传播级别：**

`SUPPORTS`：表示如果有事务，就加入到当前事务，如果没有，那也不开启事务执行。这种传播级别可用于查询方法，因为SELECT语句既可以在事务内执行，也可以不需要事务；

`MANDATORY`：表示必须要存在当前事务并加入执行，否则将抛出异常。这种传播级别可用于核心更新逻辑，比如用户余额变更，它总是被其他事务方法调用，不能直接由非事务方法调用；

`REQUIRES_NEW`：表示不管当前有没有事务，都必须开启一个新的事务执行。如果当前已经有事务，那么当前事务会挂起，等新事务完成后，再恢复执行；

`NOT_SUPPORTED`：表示不支持事务，如果当前有事务，那么当前事务会挂起，等这个方法执行完成后，再恢复执行；

`NEVER`：和`NOT_SUPPORTED`相比，它不但不支持事务，而且在监测到当前有事务时，会抛出异常拒绝执行；

`NESTED`：表示如果当前有事务，则开启一个嵌套级别事务，如果当前没有事务，则开启一个新事务。

上面这么多种事务的传播级别，其实默认的`REQUIRED`已经满足绝大部分需求，`SUPPORTS`和`REQUIRES_NEW`在少数情况下会用到，其他基本不会用到，因为把事务搞得越复杂，不仅逻辑跟着复杂，而且速度也会越慢。

**设计事务传播级别：**

```java
@Transactional(propagation = Propagation.REQUIRES_NEW)
public Product createProduct() {
    ...
}
```

**Spring事务传播实现**

spring使用ThreadLocal来发现当前线程是否存在事务，如果不存在事务，就创建事务，如果存在，就使用当前事务的数据和TransactionStaturs

特别注意的是，事务的传播必须是在同一个线程内，如果被调用的事务函数被开启了一个新的线程，那么被调用的事务函数的线程无法检测到调用他的事务函数开启的事务TransactionStatus，那么就会开启两个事务。

```java
Connection conn = openConnection();
try {
    // 关闭自动提交:
    conn.setAutoCommit(false);
    // 执行多条SQL语句:
    insert(); update(); delete();
    // 提交事务:
    conn.commit();
} catch (SQLException e) {
    // 回滚事务:
    conn.rollback();
} finally {
    conn.setAutoCommit(true);
    conn.close();
}
```

对于JDBC事务，这个线程开启的时候，Spring总是把JDBC相关的Connction和TransactionStatus实例绑定到ThreadLocal，当执行到insert、update、delete等事务方法时，他会检测到线程的事务，所以不会开启新的事务；同时他获得Connection实例，这是一个上下文，是几个方法通用的结构。ThreadLocal可以用来传递上下文，也可以用来控制事务传播级别。

### DAO

Spring提供了一个DAO支持，DAO时Data Access Object的缩写，它实际上是封装了JDBCTemplate的类，负责操纵数据库。当然可以不用DAO，直接在代码里面编写访问数据库的代码，就像自己使用JDBCTemplate一样

```java
//封装JDBCTemplate的接口
public abstract class JdbcDaoSupport extends DaoSupport {
    private JdbcTemplate jdbcTemplate;

    public final void setJdbcTemplate(JdbcTemplate jdbcTemplate) {
        this.jdbcTemplate = jdbcTemplate;
        initTemplateConfig();
    }

    public final JdbcTemplate getJdbcTemplate() {
        return this.jdbcTemplate;
    }

    ...
}


//使用泛型
public abstract class AbstractDao<T> extends JdbcDaoSupport {
    private String table;
    private Class<T> entityClass;
    private RowMapper<T> rowMapper;

    public AbstractDao() {
        // 获取当前类型的泛型类型:
        this.entityClass = getParameterizedType();
        this.table = this.entityClass.getSimpleName().toLowerCase() + "s";
        this.rowMapper = new BeanPropertyRowMapper<>(entityClass);
    }

    public T getById(long id) {
        return getJdbcTemplate().queryForObject("SELECT * FROM " + table + " WHERE id = ?", this.rowMapper, id);
    }

    public List<T> getAll(int pageIndex) {
        int limit = 100;
        int offset = limit * (pageIndex - 1);
        return getJdbcTemplate().query("SELECT * FROM " + table + " LIMIT ? OFFSET ?",
                new Object[] { limit, offset },
                this.rowMapper);
    }

    public void deleteById(long id) {
        getJdbcTemplate().update("DELETE FROM " + table + " WHERE id = ?", id);
    }
    ...
}


@Component
@Transactional
public class UserDao extends AbstractDao<User> {
    // 已经有了:
    // User getById(long)
    // List<User> getAll(int)
    // void deleteById(long)
}

@Component
@Transactional
public class BookDao extends AbstractDao<Book> {
    // 已经有了:
    // Book getById(long)
    // List<Book> getAll(int)
    // void deleteById(long)
}
```

### 集成Hibernate（ORM框架）

使用JDBCTemplate的时候，我们用的最多的方法是List<T> query(String sql, Object[] args, RowMapper rowMapper)。这个RowMapper的作用是把ResultSet的一行记录映射成一个JavaBean。这种把关系数据库中的表映射成Java对象的过程就是ORM（Object-Relational Mapping）。ORM既可以把记录转换成Java对象，也可以把Java对象转换成记录。使用JDBCTemplate加上RowMaper可以看成是最原始的ORM（关系-对象映射框架）。成熟的ORM框架还有Hibernate

#### 创建HibernateTemplate

```java
@Bean
DataSource createDataSource(
    // JDBC URL:
    @Value("${jdbc.url}") String jdbcUrl,
    // JDBC username:
    @Value("${jdbc.username}") String jdbcUsername,
    // JDBC password:
    @Value("${jdbc.password}") String jdbcPassword) {
    HikariConfig config = new HikariConfig();
    config.setJdbcUrl(jdbcUrl);
    config.setUsername(jdbcUsername);
    config.setPassword(jdbcPassword);
    config.addDataSourceProperty("autoCommit", "false");
    config.addDataSourceProperty("connectionTimeout", "5");
    config.addDataSourceProperty("idleTimeout", "60");
    return new HikariDataSource(config);
} //创建DataSource线程池

@Bean
LocalSessionFactoryBean createSessionFactory(@Autowired DataSource dataSource) {
    var props = new Properties();
    props.setProperty("hibernate.hbm2ddl.auto", "update"); // 生产环境不要使用
    props.setProperty("hibernate.dialect", "org.hibernate.dialect.HSQLDialect");
    props.setProperty("hibernate.show_sql", "true");
    var sessionFactoryBean = new LocalSessionFactoryBean();
    sessionFactoryBean.setDataSource(dataSource);
    // 扫描指定的package获取所有entity class:
    sessionFactoryBean.setPackagesToScan(AbstractEntity.class.getPackageName());
    sessionFactoryBean.setHibernateProperties(props);
    return sessionFactoryBean;
}//创建SessionFactory

@Bean
HibernateTemplate createHibernateTemplate(@Autowired SessionFactory sessionFactory) {
    return new HibernateTemplate(sessionFactory);
}//创建HibernateTemplate
```

LocalSessionFactoryBean是一个FactoryBean，他自动创建一个SessionFactory，在Hibernate中，一个Session封装了一个JDBC实例，而SessionFactory封装了JDC的DataSource实例，也就是SessionFactory持有连接池，每次操作数据库的时候，SeesionFactory创建一个新的Session，相当于从连接池DataSource里面取得一个新的Connection。

#### Hibernate指定的Java对象（Entity class）

```java
@Entity
public class User {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(nullable = false, updatable = false)
    public Long getId() { ... }

    @Column(nullable = false, unique = true, length = 100)
    public String getEmail() { ... }

    @Column(nullable = false, length = 100)
    public String getPassword() { ... }

    @Column(nullable = false, length = 100)
    public String getName() { ... }

    @Column(nullable = false, updatable = false)
    public Long getCreatedAt() { ... }
}
```

如果一个JavaBean被用于映射成关系，就要用Entity进行注解，默认的表名是JavaBean类名首字母小写，可以收用@Table(name="users") 命名表名

@Column() 用于标记用于映射到数据库的属性，nullable表示这个属性是否可以为NULL，updatable表明这个属性是否可以被用于update语句，length表明String类型的属性的长度，如果没有指定，默认String长度是255.

@Id 用于注解主键，自增主键需要用@GeneratedValue(strategy = GenerationType.IDENTITY)进行标记

注意Hibernate的JavaBean的属性类型必须是包装类，如果使用基本数据类型，因为基本数据类型有默认值，那么实际上插入的时候会使用默认值进行插入。Hibernate在插入的时候，如果遇到属性是NULL，那么他会请求数据库获得一个自增属性，使用这个自增的属性进行插入。

```java
@MappedSuperclass
public abstract class AbstractEntity {

    private Long id;
    private Long createdAt;

    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(nullable = false, updatable = false)
    public Long getId() { ... }

    @Column(nullable = false, updatable = false)
    public Long getCreatedAt() { ... }

    @Transient
    public ZonedDateTime getCreatedDateTime() {
        return Instant.ofEpochMilli(this.createdAt).atZone(ZoneId.systemDefault());
    }

    @PrePersist
    public void preInsert() {
        setCreatedAt(System.currentTimeMillis());
    }
}


@Entity
public class User extends AbstractEntity {

    @Column(nullable = false, unique = true, length = 100)
    public String getEmail() { ... }

    @Column(nullable = false, length = 100)
    public String getPassword() { ... }

    @Column(nullable = false, length = 100)
    public String getName() { ... }
}
```

@Transient表示一个虚拟属性，因为这是一个计算出来的属性，必须用这个来标记，如果没有这个标记，Hibernate会直接查询createedDataTime这个字段，然后报错。

@PrePersist标识的方法，他表示将一个JavaBean持久化数据库之前，Hibernate先执行这个方法，这样我们可以设置好createdAt这个属性。

#### Hibernate 操作

1. Insert操作

   ```java
   public User register(String email, String password, String name) {
       // 创建一个User对象:
       User user = new User();
       // 设置好各个属性:
       user.setEmail(email);
       user.setPassword(password);
       user.setName(name);
       // 不要设置id，因为使用了自增主键
       // 保存到数据库:
       hibernateTemplate.save(user);
       // 现在已经自动获得了id:
       System.out.println(user.getId());
       return user;
   }
   ```

2. Delete操作

   ```java
   public boolean deleteUser(Long id) {
       User user = hibernateTemplate.get(User.class, id);
       if (user != null) {
           hibernateTemplate.delete(user);
           return true;
       }
       return false;
   }
   ```

3. Update操作

   ```java
   public void updateUser(Long id, String name) {
       User user = hibernateTemplate.load(User.class, id);
       user.setName(name);
       hibernateTemplate.update(user);
   }
   ```

4. Query操作

   1. 使用Example查询

      ```java
      public User login(String email, String password) {
          User example = new User();
          example.setEmail(email);
          example.setPassword(password);
          List<User> list = hibernateTemplate.findByExample(example);
          return list.isEmpty() ? null : list.get(0);
      }
      ```

   2. 使用Criterial查询

      ```java
      public User login(String email, String password) {
          DetachedCriteria criteria = DetachedCriteria.forClass(User.class);
          criteria.add(Restrictions.eq("email", email))
                  .add(Restrictions.eq("password", password));
          List<User> list = (List<User>) hibernateTemplate.findByCriteria(criteria);
          return list.isEmpty() ? null : list.get(0);
      }
      ```

      使用Criterial比使用Example更好的地方在于它可以更灵活组织查询语句，而Example没办法

      ```
      DetachedCriteria criteria = DetachedCriteria.forClass(User.class);
      criteria.add(
          Restrictions.and(
              Restrictions.or(
                  Restrictions.eq("email", email),
                  Restrictions.eq("name", email)
              ),
      		Restrictions.eq("password", password)
          )
      );
      ```

   3. 使用HQL查询

      直接写HQL

      ```java
      List<User> list = (List<User>) hibernateTemplate.find("FROM User WHERE email=? AND password=?", email, password);
      ```

      使用NamedQuery

      ```java
      @NamedQueries(
          @NamedQuery(
              // 查询名称:
              name = "login",
              // 查询语句:
              query = "SELECT u FROM User u WHERE u.email=?0 AND u.password=?1"
          )
      )
      @Entity
      public class User extends AbstractEntity {
          ...
      }
      
      
      public User login(String email, String password) {
          List<User> list = (List<User>) hibernateTemplate.findByNamedQuery("login", email, password);
          return list.isEmpty() ? null : list.get(0);
      }
      ```

      直接写HQL和使用`NamedQuery`各有优劣。前者可以在代码中直观地看到查询语句，后者可以在`User`类统一管理所有相关查询。

#### 使用Hibernate原生接口

```java
void operation() {
    Session session = null;
    boolean isNew = false;
    // 获取当前Session或者打开新的Session:
    try {
        session = this.sessionFactory.getCurrentSession();
    } catch (HibernateException e) {
        session = this.sessionFactory.openSession();
        isNew = true;
    }
    // 操作Session:
    try {
        User user = session.load(User.class, 123L);
    }
    finally {
        // 关闭新打开的Session:
        if (isNew) {
            session.close();
        }
    }
}
```

### 集成JPA

JPA就是JavaEE的一个ORM标准，它的实现其实和Hibernate没啥本质区别，但是用户如果使用JPA，那么引用的就是`javax.persistence`这个“标准”包，而不是`org.hibernate`这样的第三方包。因为JPA只是接口，所以，还需要选择一个实现产品，跟JDBC接口和MySQL驱动一个道理。

我们使用JPA时也完全可以选择Hibernate作为底层实现，但也可以选择其它的JPA提供方，比如[EclipseLink](https://www.eclipse.org/eclipselink/)。Spring内置了JPA的集成，并支持选择Hibernate或EclipseLink作为实现。这里我们仍然以主流的Hibernate作为JPA实现为例子，演示JPA的基本用法。

#### JDBC Hibernate JPA关系

| JDBC       | Hibernate      | JPA                  |
| :--------- | :------------- | :------------------- |
| DataSource | SessionFactory | EntityManagerFactory |
| Connection | Session        | EntityManager        |

`SessionFactory`和`EntityManagerFactory`相当于`DataSource`，`Session`和`EntityManager`相当于`Connection`。每次需要访问数据库的时候，需要获取新的`Session`和`EntityManager`，用完后再关闭。

但是，注意到`UserService`注入的不是`EntityManagerFactory`，而是`EntityManager`，并且标注了`@PersistenceContext`。难道使用JPA可以允许多线程操作同一个`EntityManager`？

实际上这里注入的并不是真正的`EntityManager`，而是一个`EntityManager`的代理类，相当于：

```java
public class EntityManagerProxy implements EntityManager {
    private EntityManagerFactory emf;
}
```

Spring遇到标注了`@PersistenceContext`的`EntityManager`会自动注入代理，该代理会在必要的时候自动打开`EntityManager`。换句话说，多线程引用的`EntityManager`虽然是同一个代理类，但该代理类内部针对不同线程会创建不同的`EntityManager`实例。

简单总结一下，标注了`@PersistenceContext`的`EntityManager`可以被多线程安全地共享。

### 集成Mybatis

**全自动ORM框架**

Hibernate、JPA等框架操作数据库的时候，主要工作是将ResultSet的每一行变成Java Bean实现查询，或者将Java Bean自动填充到INSERT、UPDATE或DELETE等语句的参数中实现增删改等操作。

Hibernate是如何跟踪Java Bean的修改，从而在UPDATE中更新必要的属性?Hibernate实现更新，首先会使用主键查询得到对应的USER的Java Bean，此时USER Bean是瞬时状态，他失去了Session连接，当对这个User Bean修改之后，User Proxy对应的\_isXXChanged会发生变化，从而在修改的时候根据这个修改的属性更新数据库。Hibernate跟踪Java Bean状态使用的是代理类，对于一个User类，他创建了他的代理类，添加了\_session，和对应属性的\_isxxChanged。

```java
public class UserProxy extends User{
    Session _session;
    boolen _isNameChanged;
    
    public void setName(String name){
        super.setName(name) ;
        _isNameChanged = true ;
    }
}
```

Hibernate 和JPA使用特定的HQL或JPQL，经过一道转换变成特定数据库的SQL，理论上可以实现无缝切换数据库

Hibernate提供了缓存

**半自动ORM框架**

非自动化ORM框架JDBCTemplate和ORM框架相比，主要有两点区别

1. 查询之后需要手动提供Mapper实例把ResultSet的 每一行变成Java对象
2. 增删改操作的参数列表，需要手动传入，即把User实例变成[user.id, user.name, user.email]这样的列表，比较麻烦

但是JDBCTemplate的优势在于他的确定性，也就是每次读取操作一定是数据库操作而不是缓存，所执行的SQL是确定的，缺点就是比较麻烦。

介于全自动化框架和完全手动的JDBCTemplate之间的一种ORM是Mybatis，他负责把查询得到的ResultSet映射到Java Bean，或者把Java Bean的参数自动填充到增删改的SQL语句中

**Mybatis的使用**

使用Mybatis，必须编写一个Mapper实现Java Bean属性和数据库记录列名的映射。

```java
public interface UserMapper {
	//查询的返回结果会被自动转化为User Bean，转换规则是列名和属性对应
	@Select("SELECT * FROM users WHERE id = #{id}")
	User getById(@Param("id") long id);

	@Select("SELECT * FROM users WHERE email = #{email}")
	User getByEmail(@Param("email") String email);

	@Select("SELECT * FROM users LIMIT #{offset}, #{maxResults}")
	List<User> getAll(@Param("offset") int offset, @Param("maxResults") int maxResults);

    //Mybatis自动使用User去填充占位符。Options标明自增主键
	@Options(useGeneratedKeys = true, keyProperty = "id", keyColumn = "id")
	@Insert("INSERT INTO users (email, password, name, createdAt) VALUES (#{user.email}, #{user.password}, #{user.name}, #{user.createdAt})")
	void insert(@Param("user") User user);

	@Update("UPDATE users SET name = #{user.name}, createdAt = #{user.createdAt} WHERE id = #{user.id}")
	void update(@Param("user") User user);

	@Delete("DELETE FROM users WHERE id = #{id}")
	void deleteById(@Param("id") long id);
}

```

配置类AppConfig添加了@MapperScan后Mybatis会自动扫描指定包下面的所有Mapper并创建实现类。

## Spring MVC开发

在Web应用中启动Spring容器有很多种方法，可以通过Listener启动，也可以通过Servlet启动，可以使用XML配置，也可以使用注解配置

Spring MVC文件结构

```ascii
spring-web-mvc
├── pom.xml
└── src
    └── main
        ├── java
        │   └── com
        │       └── itranswarp
        │           └── learnjava
        │               ├── AppConfig.java
        │               ├── DatabaseInitializer.java
        │               ├── entity
        │               │   └── User.java
        │               ├── service
        │               │   └── UserService.java
        │               └── web
        │                   └── UserController.java
        ├── resources
        │   ├── jdbc.properties
        │   └── logback.xml
        └── webapp
            ├── WEB-INF
            │   ├── templates
            │   │   ├── _base.html
            │   │   ├── index.html
            │   │   ├── profile.html
            │   │   ├── register.html
            │   │   └── signin.html
            │   └── web.xml
            └── static
                ├── css
                │   └── bootstrap.css
                └── js
                    └── jquery.js
```



# Spring Boot开发

Spring Boot文件结构

```ascii
src/main/java
└── com
    └── itranswarp
        └── learnjava
            ├── Application.java
            ├── entity
            │   └── User.java
            ├── service
            │   └── UserService.java
            └── web
                └── UserController.java
```

Spring Boot相较于Spring MVC添加了许多自动装配功能。Spring Boot自动装配功能是通过自动扫描+条件装配实现的，这一套机制在默认情况下工作得很好，但是，如果我们要手动控制某个Bean的创建，就需要详细地了解Spring Boot自动创建的原理，很多时候还要跟踪`XxxAutoConfiguration`，以便设定条件使得某个Bean不会被自动创建。

### 集成第三方组件

#### 集成Open API

Open API可以自动生成描述REST服务API的文档

#### 集成Redis

Redis是一个key-valu存储系统，是跨平台的非关系型数据库。

Redis是一个开源的使用ANSI C语言编写的、遵守BSD协议、支持网络、可基于内存、分布式、可选持久性的键值对（key-value）存储数据库。

Redis常被称为数据结构服务器，因为他的valuekeyishi字符串（String）、哈希（Hash）、列表（List）、集合（Sets）和有序集合（sorted sets）

**Redis为什么那么快**

（1）完全基于内存，数据存在内存中，绝大部分请求是纯粹的内存操作，非常快速，跟传统的磁盘文件数据存储相比，避免了通过磁盘IO读取到内存这部分的开销。

（2）数据结构简单，对数据操作也简单。Redis中的数据结构是专门进行设计的，每种数据结构都有一种或多种数据结构来支持。Redis正是依赖这些灵活的数据结构，来提升读取和写入的性能。

（3）采用单线程，省去了很多上下文切换的时间以及CPU消耗，不存在竞争条件，不用去考虑各种锁的问题，不存在加锁释放锁操作，也不会出现死锁而导致的性能消耗。

（4）使用基于IO多路复用机制的线程模型，可以处理并发的链接。
多个 Socket 可能会产生不同的操作，每个操作对应不同的文件事件，但是IO多路复用程序会监听多个Socket，将Socket产生的事件放入队列中排队，事件分派器每次从队列中取出一个事件，把该事件交给对应的事件处理器进行处理。

Redis客户端对服务端的每次调用都经历了发送命令，执行命令，返回结果三个过程。其中执行命令阶段，由于Redis是单线程来处理命令的，所有每一条到达服务端的命令不会立刻执行，所有的命令都会进入一个队列中，然后逐个被执行。并且多个客户端发送的命令的执行顺序是不确定的。但是可以确定的是不会有两条命令被同时执行，不会产生并发问题，这就是Redis的单线程基本模型。
（5）Redis直接自己构建了VM 机制 ，避免调用系统函数的时候，浪费时间去移动和请求

**为什么Redis是单线程**

这里的单线程指的是Redis处理所有命令请求使用单线程，其他模块，比如解析网络请求和输出到socket依然使用的是多线程。为什么使用单线程，因为CPU不是Redis新能瓶颈，单线程实现比较简单好维护

**多线程模式下，是否存在线程并发安全问题？**

Redis的多线程，是网络IO多线程，而执行命令和访问内存等依然是是哦呢的单线程，没有并发安全的问题

![img](https://img-blog.csdnimg.cn/20210201030222228.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L2E3NDUyMzM3MDA=,size_16,color_FFFFFF,t_70)



**Redis 过期策略和内存淘汰机制**

Redis的用途非常广泛。作为一个高性能的内存数据库，它经常被用于缓存的业务场景。

所谓缓存，即在第一次获取到数据的时候，把它暂存在内存中。这样下次需要这个数据的时候，就直接从内存中取，不用再去查询数据库或调用远程接口，这样可以极大地提高应用程序的性能。

如果缓存中的数据永久存在，那占用的内存就会变得越来越大。而内存是有限的，所以缓存系统需要在需要的时候删除一些不必要的缓存数据以节约内存空间。

Redis提供了两种机制配合来达到上述目的：**过期策略**和**内存淘汰机制**。

1. Redis是使用**定期删除**+**惰性删除**两者配合的过期策略。

   **定期删除**

   使用过Redis的同学应该知道，我们在设置一个key之后，可以指定这个key的过期时间。那么这个key到了过期时间就会立即被删除吗？Redis是如何删除这些过期key的呢？定期删除指的是Redis默认每隔100ms就**随机抽取**一些设置了过期时间的key，检测这些key是否过期，如果过期了就将其删掉。因为key太多，如果全盘扫描所有的key会非常耗性能，所以是随机抽取一些key来删除。这样就有可能删除不完，需要惰性删除配合。

   **惰性删除**

   惰性删除不再是Redis去主动删除，而是在客户端要获取某个key的时候，Redis会先去检测一下这个key是否已经过期，如果没有过期则返回给客户端，如果已经过期了，那么Redis会删除这个key，不会返回给客户端。

   所以惰性删除可以解决一些过期了，但没被定期删除随机抽取到的key。但有些过期的key既没有被随机抽取，也没有被客户端访问，就会一直保留在数据库，占用内存，长期下去可能会导致内存耗尽。所以Redis提供了内存淘汰机制来解决这个问题。

   **为什么不适用定时删除策略**

   为什么不使用定时删除？所谓定时删除，指的是用一个定时器来负责监视key，当这个key过期就自动删除，虽然内存及时释放，但是十分消耗CPU资源，因此一般不推荐采用这一策略。

2. 内存淘汰策略

   Redis在使用内存达到某个阈值（通过maxmemory配置)的时候，就会触发内存淘汰机制，选取一些key来删除。内存淘汰有许多策略，下面分别介绍这几种不同的策略。

   noeviction：当内存不足以容纳新写入数据时，新写入操作会报错。**默认策略**

   allkeys-lru：当内存不足以容纳新写入数据时，在键空间中，移除最近最少使用的key。

   allkeys-random：当内存不足以容纳新写入数据时，在键空间中，随机移除某个key。

   volatile-lru：当内存不足以容纳新写入数据时，在设置了过期时间的键空间中，移除最近最少使用的key。

   volatile-random：当内存不足以容纳新写入数据时，在设置了过期时间的键空间中，随机移除某个key。

   volatile-ttl：当内存不足以容纳新写入数据时，在设置了过期时间的键空间中，有更早过期时间的key优先移除。

   **如何选取合适的策略？比较推荐的是两种lru策略**。根据自己的业务需求。如果你使用Redis只是作为缓存，不作为DB持久化，那推荐选择allkeys-lru；如果你使用Redis同时用于缓存和数据持久化，那推荐选择volatile-lru。

**Redis持久化策略**

​		前面的文章里面介绍了Redis的两种持久化策略：RDB和AOF。在持久化和数据恢复阶段，对过期key也有一些特殊的处理。

​		**RDB**

​		从内存数据库持久化数据到RDB文件：持久化key之前，会检查是否过期，过期的key不进入RDB文件 从RDB文件恢复数据到内存数		据	库：数据载入数据库之前，会对key先进行过期检查，如果过期，不导入数据库（主库情况）。

​		**AOF**

​		从内存数据库持久化数据到AOF文件：当key过期后，还没有被删除，此时进行执行持久化操作（该key是不会进入aof文件的，因为		没有发生修改命令） 当key过期后，在发生删除操作时，程序会向aof文件追加一条del命令（在将来的以aof文件恢复数据的时候该		过期的键就会被删掉） AOF重写：重写时，会先判断key是否过期，已过期的key不会重写到aof文件

Redis Rehash

[hash table](http://blog.nosqlfan.com/tags/hash-table)是一种高效的[数据结构](https://so.csdn.net/so/search?q=数据结构&spm=1001.2101.3001.7020)，被广泛的用在key-value存储中，[Redis](http://blog.nosqlfan.com/tags/redis)的dict其实就是一个典型的[hash](http://blog.nosqlfan.com/tags/hash) table实现。

[rehash](http://blog.nosqlfan.com/tags/rehash)是在[hash](https://so.csdn.net/so/search?q=hash&spm=1001.2101.3001.7020) table的大小不能满足需求，造成过多hash碰撞后需要进行的扩容hash table的操作，其实通常的做法确实是建立一个额外的hash table，将原来的hash table中的数据在新的数据中进行重新输入，从而生成新的hash表。

redis的 rehash包括了[lazy rehash](http://blog.nosqlfan.com/tags/lazy-rehash)ing和[active rehash](http://blog.nosqlfan.com/tags/active-rehash)ing两种方式

- lazy rehashing：在每次对dict进行操作的时候执行一个slot的rehash

- active rehashing：每100ms里面使用1ms时间进行rehash。

  

**6.讲一下redits的持久化机制** 

> 持久化就是把内存的数据写到磁盘中去，防止服务宕机了内存数据丢失
>
>    Redis 提供两种持久化机制 RDB（默认） 和 AOF 机制:  
>
>    （1）RDB：是Redis DataBase缩写快照  
>
>    RDB是Redis默认的持久化方式。按照一定的时间将内存的数据以快照的形式保存到硬盘中，对应产生的数据文件为dump.rdb。通过配置文件中的save参数来定义快照的周期。  
>
>    （2）AOF：持久化  
>
>    AOF持久化(即Append Only File持久化)，则是将Redis执行的每次写命令记录到单独的日志文件中，当重启Redis会重新将持久化的日志中文件恢复数据。  
>
>    当两种方式同时开启时，数据恢复Redis会优先选择AOF恢复。  
>
>    Redis 4.0 对于持久化机制的优化  
>
>    Redis 4.0 开始支持 RDB 和 AOF 的混合持久化 （默认关闭，可以通过配置项 aof-use-rdb-preamble 开启）。  
>
>    如果把混合持久化打开，AOF 重写的时候就直接把 RDB 的内容写到 AOF 文件开头。这样做的好处是可以结合 RDB 和 AOF 的优点, 快速加载同时避免丢失过多的数据。当然缺点也是有的， AOF 里面的 RDB 部分是压缩格式不再是 AOF 格式，可读性较差。

**缓存穿透、击穿、雪崩，选一个讲一下** 

>   缓存雪崩是指缓存同一时间大面积的失效，所以，后面的请求都会落到数据库上，造成数据库短时间内承受大量请求而崩掉。  
>
>    解决方案  
>
> 1.  缓存数据的过期时间设置随机，防止同一时间大量数据过期现象发生。 
> 2.  一般并发量不是特别多的时候，使用最多的解决方案是加锁排队。 
> 3.  给每一个缓存数据增加相应的缓存标记，记录缓存的是否失效，如果缓存标记失效，则更新数据缓存。 
>
>    
>   
>
>    缓存穿透说简单点就是大量请求的 key 根本不存在于缓存中，导致请求直接到了数据库上，根本没有经过缓存这一层。举个例子：某个黑客故意制造我们缓存中不存在的 key 发起大量请求，导致大量请求落到数据库。  
>
>    解决方案  
>
> -  接口层增加校验，如用户鉴权校验，id做基础校验，id<=0的直接拦截； 
> -  从缓存取不到的数据，在数据库中也没有取到，这时也可以将key-value对写为key-null，缓存有效时间可以设置短点，如30秒（设置太长会导致正常情况也没法使用）。这样可以防止攻击用户反复用同一个id暴力攻击 
> -  采用布隆过滤器，将所有可能存在的数据哈希到一个足够大的 bitmap 中，一个一定不存在的数据会被这个 bitmap 拦截掉，从而避免了对底层存储系统的查询压力 
>
> ​    
>    
>
>  缓存击穿是指缓存中没有但数据库中有的数据（一般是缓存时间到期），这时由于并发用户特别多，同时读缓存没读到数据，又同时去数据库去取数据，引起数据库压力瞬间增大，造成过大压力。和缓存雪崩不同的是，缓存击穿指并发查同一条数据，缓存雪崩是不同数据都过期了，很多数据都查不到从而查数据库。  
>  解决方案  
>
> -  设置热点数据永远不过期。 
> -  加互斥锁，互斥锁

#### 集成JMS（ActiveMQ Artemis）

JMS，Java Message Service， 是JavaEE的消息服务接口。

消息服务，就是两个进程之间，通过消息服务器通信

```ascii
┌────────┐    ┌──────────────┐    ┌────────┐
│Producer│───>│Message Server│───>│Consumer│
└────────┘    └──────────────┘    └────────┘
```

使用消息服务进行通信而不是调用对方的API，好处是

1. 双方各自无需知晓对方的存在，消息可以异步处理，消息可以在Consumer离线的时候缓存
2. 如果Producer发送的消息频率高于Consumer的处理能力，消息可以积压在消息服务器，不至于压垮Consumer
3. 通过一个消息服务器，可以连接多个Producer和多个Consumer

JMS是JavaEE定义的消息服务接口，他的一种实现是ActiveMQ Artemis

JMS消息服务模型

1. Queue

   ```ascii
   ┌────────┐    ┌────────┐    ┌────────┐
   │Producer│───>│ Queue  │───>│Consumer│
   └────────┘    └────────┘    └────────┘
   ```

2. Topic

   一种是Topic：

   ```ascii
                               ┌────────┐
                            ┌─>│Consumer│
                            │  └────────┘
   ┌────────┐    ┌────────┐ │  ┌────────┐
   │Producer│───>│ Topic  │─┼─>│Consumer│
   └────────┘    └────────┘ │  └────────┘
                            │  ┌────────┐
                            └─>│Consumer│
                               └────────┘
   ```

Spring 消息服务

1. 生产者

   ```java
   try {
       Connection connection = null;
       try {
           // 创建连接:
           connection = connectionFactory.createConnection();
           // 创建会话:
           Session session = connection.createSession(false,Session.AUTO_ACKNOWLEDGE);
           // 创建一个Producer并关联到某个Queue:
           MessageProducer messageProducer = session.createProducer(queue);
           // 创建一个文本消息:
           TextMessage textMessage = session.createTextMessage(text);
           // 发送消息:
           messageProducer.send(textMessage);
       } finally {
           // 关闭连接:
           if (connection != null) {
               connection.close();
           }
       }
   } catch (JMSException ex) {
       // 处理JMS异常
   }
   ```

2. 消费者

   ```java
   // 创建JMS连接:
   Connection connection = connectionFactory.createConnection();
   // 创建会话:
   Session session = connection.createSession(false, Session.AUTO_ACKNOWLEDGE);
   // 创建一个Consumer:
   MessageConsumer consumer = session.createConsumer(queue);
   // 为Consumer指定一个消息处理器:
   consumer.setMessageListener(new MessageListener() { 
       public void onMessage(Message message) {
           // 在此处理消息... 
       }
   });
   // 启动接收消息的循环:
   connection.start();
   ```

用消息服务对发送Email进行改造的好处是，发送Email的能力通常是有限的，通过JMS消息服务，如果短时间内需要给大量用户发送Email，可以先把消息堆积在JMS服务器上慢慢发送，对于批量发送邮件、短信等尤其有用。

#### 集成RabbitMQ

AcitveMQ Artemis消息服务，实现了JMS消息服务协议，JMS消息服务协议是JAVAEE定义的标准消息服务接口，如果JAVA和其他语言编写的程序进行消息服务通信，就不太适合。

AMQP是一种独立于语言的高级消息队列协议，它定义了一种二进制格式的消息流，任何语言都可以实现这个协议。使用最广泛的还是Erlang编写的RabbitMQ

**AMQP和JMS的比较**

JMS定义了两种类型的消息通道，点对点的Queue和一对多的Topic。而AMQP定义了Exchange和Queue的概念，他的消息模型是

```ascii
                                      ┌───────┐
                                 ┌───>│Queue-1│
                  ┌──────────┐   │    └───────┘
              ┌──>│Exchange-1│───┤
┌──────────┐  │   └──────────┘   │    ┌───────┐
│Producer-1│──┤                  ├───>│Queue-2│
└──────────┘  │   ┌──────────┐   │    └───────┘
              └──>│Exchange-2│───┤
                  └──────────┘   │    ┌───────┐
                                 └───>│Queue-3│
                                      └───────┘
```

他的producer发送的消息给exchange，由exchange负责转发给不同的queue，consumer可以订阅不同的queue获得消息。

RabbitMQ比JMS的好处在于更加灵活，它可以自定义路由。如果一个exchange连接一个queue，那么这就是JMS的queue，如果连接多个queue，就像JMS的Topic

# JVM相关

[![这里写图片描述](https://github.com/AlbertoWang/java-noob/raw/master/%E5%B8%B8%E8%80%83%E9%A2%98.assets/jvm-model.png)](https://github.com/AlbertoWang/java-noob/blob/master/常考题.assets/jvm-model.png)

## 栈的种类

- JVM栈

  包括了**操作数栈**、局部变量表、指向当前方法所属类的运行时常量池的**引用**、方法**返回地址**；

- 本地方法栈

  非Java语言实现的方法。

## 堆中都有什么

线程共享的内存区域，所有实例化的对象保存在堆中，是垃圾回收GC的执行空间

## GC过程

[![307536-20190604201603492-1400932049](https://github.com/AlbertoWang/java-noob/raw/master/%E5%B8%B8%E8%80%83%E9%A2%98.assets/gc-model.png)](https://github.com/AlbertoWang/java-noob/blob/master/常考题.assets/gc-model.png)

## 判断对象是否需要被回收

- 引用计数：有地方引用该对象，计数器++，引用失效，计数器--，有循环引用的问题；
- 可达性分析：根据引用的关系构造引用链（有向图），在图中不可达的对象就是要被回收的。

## 可以作为GC Root的对象

1. 虚拟机栈中引用的对象；
2. 方法区中的静态变量；
3. 常量对象；
4. Native方法引用的对象；
5. 被`synchronized`修饰的对象等。

# JAVA

## JVM 内存结构

《深入理解Java虚拟机（第2版）》中的描述是下面这个样子的：

![img](https://pic4.zhimg.com/80/v2-abefb713de46f1e6dd241246c0afe263_720w.jpg)

JVM的内存结构大概分为：

- 堆（Heap）：线程共享。所有的对象实例以及数组都要在堆上分配。回收器主要管理的对象。
- 方法区（Method Area）：线程共享。存储类信息、常量、静态变量、即时编译器编译后的代码。
- 方法栈（JVM Stack）：线程私有。存储局部变量表、操作栈、动态链接、方法出口，对象指针。
- 本地方法栈（Native Method Stack）：线程私有。为虚拟机使用到的Native 方法服务。如Java使用c或者c++编写的接口服务时，代码在此区运行。
- 程序计数器（Program Counter Register）：线程私有。有些文章也翻译成PC寄存器（PC Register），同一个东西。它可以看作是当前线程所执行的字节码的行号指示器。指向下一条要执行的指令。

为什么元空间替换永久代？，方法去保存再元空间

表面上看是为了避免OOM异常。因为通常使用PermSize和MaxPermSize设置永久代的大小就决定了永久代的上限，但是不是总能知道应该设置为多大合适, 如果使用默认值很容易遇到OOM错误。

当使用元空间时，可以加载多少类的元数据就不再由MaxPermSize控制, 而由系统的实际可用空间来控制。

更深层的原因还是要合并HotSpot和JRockit的代码，JRockit从来没有所谓的永久代，也不需要开发运维人员设置永久代的大小，但是运行良好。同时也不用担心运行性能问题了,在覆盖到的测试中, 程序启动和运行速度降低不超过1%，但是这点性能损失换来了更大的安全保障。



先看一张图，这张图能很清晰的说明JVM内存结构的布局和相应的控制参数：

![img](https://pic4.zhimg.com/80/v2-8845236d1ab9f22fcc658375967d53fb_720w.jpg)

（图片来源于网络）

### 堆

堆的作用是存放对象实例和数组。从结构上来分，可以分为新生代和老年代。而新生代又可以分为Eden 空间、From Survivor 空间（s0）、To Survivor 空间（s1）。 所有新生成的对象首先都是放在新生代的。需要注意，Survivor的两个区是对称的，没先后关系，所以同一个区中可能同时存在从Eden复制过来的对象，和从前一个Survivor复制过来的对象，而复制到老年代的只有从第一个Survivor区过来的对象。而且，Survivor区总有一个是空的。



- 控制参数

-Xms设置堆的最小空间大小。-Xmx设置堆的最大空间大小。-XX:NewSize设置新生代最小空间大小。-XX:MaxNewSize设置新生代最小空间大小。



- 垃圾回收

此区域是垃圾回收的主要操作区域。



- 异常情况

如果在堆中没有内存完成实例分配，并且堆也无法再扩展时，将会抛出OutOfMemoryError 异常

### 方法区

方法区（Method Area）与Java 堆一样，是各个线程共享的内存区域，它用于存储已被虚拟机加载的类信息、常量、静态变量、即时编译器编译后的代码等数据。虽然Java 虚拟机规范把方法区描述为堆的一个逻辑部分，但是它却有一个别名叫做Non-Heap（非堆），目的应该是与Java 堆区分开来。



很多人愿意把方法区称为“永久代”（Permanent Generation），本质上两者并不等价，仅仅是因为HotSpot虚拟机的设计团队选择把GC 分代收集扩展至方法区，或者说使用永久代来实现方法区而已。对于其他虚拟机（如BEA JRockit、IBM J9 等）来说是不存在永久代的概念的。在Java8中永生代彻底消失了。



- 控制参数

-XX:PermSize 设置最小空间 -XX:MaxPermSize 设置最大空间。



- 垃圾回收

对此区域会涉及但是很少进行垃圾回收。这个区域的内存回收目标主要是针对常量池的回收和对类型的卸载，一般来说这个区域的回收“成绩”比较难以令人满意。



- 异常情况

根据Java 虚拟机规范的规定， 当方法区无法满足内存分配需求时，将抛出OutOfMemoryError。

### 方法栈

每个线程会有一个私有的栈。每个线程中方法的调用又会在本栈中创建一个栈帧。在方法栈中会存放编译期可知的各种基本数据类型（boolean、byte、char、short、int、float、long、double）、对象引用（reference 类型，它不等同于对象本身。局部变量表所需的内存空间在编译期间完成分配，当进入一个方法时，这个方法需要在帧中分配多大的局部变量空间是完全确定的，在方法运行期间不会改变局部变量表的大小。



- 控制参数

-Xss控制每个线程栈的大小。



- 异常情况

在Java 虚拟机规范中，对这个区域规定了两种异常状况：

\- StackOverflowError： 异常线程请求的栈深度大于虚拟机所允许的深度时抛出；

\- OutOfMemoryError 异常： 虚拟机栈可以动态扩展，当扩展时无法申请到足够的内存时会抛出。

### 本地方法栈

本地方法栈（Native Method Stacks）与虚拟机栈所发挥的作用是非常相似的，其

区别不过是虚拟机栈为虚拟机执行Java 方法（也就是字节码）服务，而本地方法栈则

是为虚拟机使用到的Native 方法服务。



- 控制参数

在Sun JDK中本地方法栈和方法栈是同一个，因此也可以用-Xss控制每个线程的大小。



- 异常情况

与虚拟机栈一样，本地方法栈区域也会抛出StackOverflowError 和OutOfMemoryError

异常。

### 程序计数器

它的作用可以看做是当前线程所执行的字节码的行号指示器。



- 异常情况

此内存区域是唯一一个在Java 虚拟机规范中没有规定任何OutOfMemoryError 情况的区域。

## JAVA内存模型（JMM）

Java Memory Model (JAVA 内存模型）是描述线程之间如何通过内存(memory)来进行交互。 具体说来， JVM中存在一个主存区（Main Memory或Java Heap Memory），对于所有线程进行共享，而每个线程又有自己的工作内存（Working Memory），工作内存中保存的是主存中某些变量的拷贝，线程对所有变量的操作并非发生在主存区，而是发生在工作内存中，而线程之间是不能直接相互访问，变量在程序中的传递，是依赖主存来完成的。

Java内存模型的抽象示意图如下： 

![img](https://imgs.developpaper.com/imgs/2019619101457047.jpg)

从上图来看，线程A与线程B之间如要通信的话，必须要经历下面2个步骤：

1、线程A把本地内存A中更新过的共享变量刷新到主内存中去。

 2、线程B到主内存中去读取线程A之前已更新过的共享变量。

## 内存可见性

一个线程改变了共享变量之后需要通知其他线程这种改变

## 线程同步（保证内存可见性方案）

1. synchronized关键字

   同步锁方案缺点：**会带来性能问题，效率特别低，造成线程阻塞**。

2. volatile关键字

   当一个线程改变内存，会利用CPU总线监听机制来通知这种改变

   **Volatile保证部分类型的原子性**

   我们说Voloatile不能保证原子性，有一点局限： 因为在32位（4字节）处理器中，Java中读取long类型变量不是原子的，需要分成两步，如果一个线程正在修改该long变量的值，另一个线程可能只能看到该值的一半（前32位）。但是对一个volatile型的long或double变量的读写时原子的

3. 原子操作CAS

   CAS，Compare and Swap，是一种针对多处理器设计的一种特殊命令，用于管理对共享数据的并发访问

   CAS是一种无锁的非阻塞算法实现，是硬件对并发操作的支持，保证了数据变量的原子性

   CAS包含三个操作数：内存值V，预估值A，更新值B，当且仅当V==A时，V=B，否则不会执行任何操作

![preview](https://pic1.zhimg.com/v2-d25bfd180fd5d1fc16090af61d813bb4_r.jpg)

​	CAS算法包含三个操作数，内存V，本地内存预期值A，本地内存想要修改的值B。T1和T2线程运行时，读取内存值V到本地内存预期值A，当T1将值B修改后，他检查内存值和预期值相等，就把修改值B更新到主存，否则，他发现内存值V！=预期值B，他进入自旋，不断读取新的V值并处理之后和A比较。这是一种乐观锁的思路，也就是他相信在他修改之前，内存没有得到修改。

**CAS算法问题**

1. ABA问题，一个线程把A变成B，另一个线程把B又变成A，这样第三个线程无法感知这个变量的这种变化

![img](https://pic4.zhimg.com/80/v2-9e9a59d57847f7fe01c1e4fe95769723_720w.jpg)

​		ABA问题解决方案，在变量前面添加版本号，每次更新后版本号加一

2. 自旋消耗CPU性能
3. 只能保证一个共享变量的原子操作。

可以用CAS在无锁的情况下实现原子操作，但要明确应用场合，非常简单的操作且又不想引入锁可以考虑使用CAS操作，当想要非阻塞地完成某一操作也可以考虑CAS。不推荐在复杂操作中引入CAS，会使程序可读性变差，且难以测试，同时会出现问题。

## JAVA 垃圾收集算法GC

Java中Stop-The-World机制简称**STW**，是在执行垃圾收集算法时，[Java](http://www.jb51.net/list/list_207_1.htm)应用程序的其他所有线程都被[挂起](https://so.csdn.net/so/search?q=挂起&spm=1001.2101.3001.7020)（除了垃圾收集帮助器之外）。Java中一种全局暂停现象，全局停顿，所有Java代码停止，native代码可以执行，但不能与JVM交互；这些现象多半是由于gc引起。

### CMS收集器

CMS（Concurrent Mark Sweep）收集器是一种以获取最短回收停顿时间为目标的收集器，它非常符合那些集中在互联网站或者B/S系统的服务端上的Java应用，这些应用都非常重视服务的响应速度。从名字上（“Mark Sweep”）就可以看出它是基于“标记-清除”算法实现的。

CMS收集器工作的整个流程分为以下4个步骤：

- 初始标记（CMS initial mark）：仅仅只是标记一下GC Roots能直接关联到的对象，速度很快，需要“Stop The World”。
- 并发标记（CMS concurrent mark）：进行GC Roots Tracing的过程，在整个过程中耗时最长。
- 重新标记（CMS remark）：为了修正并发标记期间因用户程序继续运作而导致标记产生变动的那一部分对象的标记记录，这个阶段的停顿时间一般会比初始标记阶段稍长一些，但远比并发标记的时间短。此阶段也需要“Stop The World”。
- 并发清除（CMS concurrent sweep）

由于整个过程中耗时最长的并发标记和并发清除过程收集器线程都可以与用户线程一起工作。

所以，从总体上来说，CMS收集器的内存回收过程是与用户线程一起并发执行的。通过下图可以比较清楚地看到CMS收集器的运作步骤中并发和需要停顿的时间：

![img](https://ask.qcloudimg.com/http-save/yehe-1346475/sdxh11irpl.jpeg?imageView2/2/w/1620)

优点

CMS是一款优秀的收集器，它的主要优点在名字上已经体现出来了：并发收集、低停顿，因此CMS收集器也被称为并发低停顿收集器（Concurrent Low Pause Collector）。

缺点

- 对CPU资源非常敏感 其实，面向并发设计的程序都对CPU资源比较敏感。在并发阶段，它虽然不会导致用户线程停顿，但会因为占用了一部分线程（或者说CPU资源）而导致应用程序变慢，总吞吐量会降低。
- CMS默认启动的回收线程数是（CPU数量+3）/4，也就是当CPU在4个以上时，并发回收时垃圾收集线程不少于25%的CPU资源，并且随着CPU数量的增加而下降。但是当CPU不足4个时（比如2个），CMS对用户程序的影响就可能变得很大，如果本来CPU负载就比较大，还要分出一半的运算能力去执行收集器线程，就可能导致用户程序的执行速度忽然降低了50%，其实也让人无法接受。
- 无法处理浮动垃圾（Floating Garbage） 可能出现“Concurrent Mode Failure”失败而导致另一次Full GC的产生。
- 由于CMS并发清理阶段用户线程还在运行着，伴随程序运行自然就还会有新的垃圾不断产生。这一部分垃圾出现在标记过程之后，CMS无法再当次收集中处理掉它们，只好留待下一次GC时再清理掉。
- 这一部分垃圾就被称为“浮动垃圾”。也是由于在垃圾收集阶段用户线程还需要运行，那也就还需要预留有足够的内存空间给用户线程使用，因此CMS收集器不能像其他收集器那样等到老年代几乎完全被填满了再进行收集，需要预留一部分空间提供并发收集时的程序运作使用。
- 标记-清除算法导致的空间碎片 CMS是一款基于“标记-清除”算法实现的收集器，这意味着收集结束时会有大量空间碎片产生。
- 空间碎片过多时，将会给大对象分配带来很大麻烦，往往出现老年代空间剩余，但无法找到足够大连续空间来分配当前对象。

### G1收集器

G1（Garbage-First）收集器是当今收集器技术发展最前沿的成果之一，它是一款面向服务端应用的垃圾收集器，HotSpot开发团队赋予它的使命是（在比较长期的）未来可以替换掉JDK 1.5中发布的CMS收集器。与其他GC收集器相比，G1具备如下特点：

- 并行与并发 G1 能充分利用多CPU、多核环境下的硬件优势，使用多个CPU来缩短“Stop The World”停顿时间，部分其他收集器原本需要停顿Java线程执行的GC动作，G1收集器仍然可以通过并发的方式让Java程序继续执行。
- 分代收集 与其他收集器一样，分代概念在G1中依然得以保留。虽然G1可以不需要其他收集器配合就能独立管理整个GC堆，但它能够采用不同方式去处理新创建的对象和已存活一段时间、熬过多次GC的旧对象来获取更好的收集效果。
- 空间整合 G1从整体来看是基于“标记-整理”算法实现的收集器，从局部（两个Region之间）上来看是基于“复制”算法实现的。这意味着G1运行期间不会产生内存空间碎片，收集后能提供规整的可用内存。此特性有利于程序长时间运行，分配大对象时不会因为无法找到连续内存空间而提前触发下一次GC。
- 可预测的停顿 这是G1相对CMS的一大优势，降低停顿时间是G1和CMS共同的关注点，但G1除了降低停顿外，还能建立可预测的停顿时间模型，能让使用者明确指定在一个长度为M毫秒的时间片段内，消耗在GC上的时间不得超过N毫秒，这几乎已经是实时Java（RTSJ）的垃圾收集器的特征了。

![img](https://ask.qcloudimg.com/http-save/yehe-1346475/0nj852xmok.jpeg?imageView2/2/w/1620)



# 计算机网络相关

[link](https://www.yuque.com/albertowang/interview/mu8egf)

# 操作系统相关

[link](https://www.yuque.com/albertowang/interview/mu8egf)



# 项目

# JAVA和框架

1. Concurrent集合类

   ArrayList实现，CopyOnWriteArray实现

   ArrayList实现queue

   实现线程安全的BlockingQueue

   HashMap实现（数组，链表，红黑树）

2. JVM、JDK、JRE

   JVM内存结构

   Java内存模型

   JVM垃圾回收GC标记死亡对象方法、回收算法、回收过程

3. 对象创建的过程
4. Spring IoC/DI  AOP
5. RabbitMQ 

# 操作系统

1. 进程和线程

   进程和线程区别，进程状态模型

​		线程同步（synchronized，volatile，CAS），线程安全

​		锁（synchronized，无锁，偏向锁，轻量级锁，重量级锁；乐观锁-CAS、Stampedlock，悲观锁-ReentrantLock、synchronized、		读写锁，MVCC多版本并发控制）

# 数据库

1. 事务，事务ACID特性和实现，事务隔离级别
2. 范式
3. 数据库分库分表
4. 索引、聚集索引和非聚集索引、主键索引、唯一索引、索引的实现底层
5. Redis数据库
6. MySQL数据库，主从复制，BinLog，数据恢复

# 计算机网络

1. 七层分层/四层分层，各层协议
2. DNS过程，ping过程
3. 浏览器输入到得到网络显示整个过程
4. TCP/UDP，三次握手四次挥手

# 数据结构和算法

# 有什么想问的




using System.Runtime.InteropServices;

namespace CSharpApp;

public static class HelloWorld
{
    [DllImport(@"HelloWorld")]
    public static extern void PrintHelloWorld();
    
    [DllImport(@"HelloWorld")]
    public static extern int Add(int a, int b);

    [DllImport(@"HelloWorld")]
    public static extern IntPtr newHello(string name);

    [DllImport(@"HelloWorld")]
    public static extern void deleteHello(IntPtr ptr);

    [DllImport(@"HelloWorld")]
    public static extern void printName(IntPtr ptr);
    
    [DllImport(@"Nostos")]
    public static extern void runNostos();
}


using System.Reflection;

namespace CSharpLib;
using System.Runtime.InteropServices;
using NativeLibraryManager;

public static class Class1
{
    [DllImport(@"HelloWorld", CallingConvention = CallingConvention.Cdecl, CharSet = CharSet.Ansi)]
    public static extern void HelloWorld();

    public static void Test()
    {
        Console.WriteLine("Okay");
    }
}

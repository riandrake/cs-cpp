// See https://aka.ms/new-console-template for more information
using CSharpApp;

var dllDirectory = @"C:/Git/Nostos/Engine/Binaries/Windows/Debug";
Environment.SetEnvironmentVariable("PATH", Environment.GetEnvironmentVariable("PATH") + ";" + dllDirectory);

HelloWorld.PrintHelloWorld();
Console.WriteLine(HelloWorld.Add(3, 5));

var rian = HelloWorld.newHello("rian");
var ben = HelloWorld.newHello("ben");

HelloWorld.printName(rian);
HelloWorld.printName(ben);

HelloWorld.deleteHello(rian);
HelloWorld.deleteHello(ben);

HelloWorld.runNostos();
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;

namespace UseCase
{
    class Program
    {
        static void Main(string[] args)
        {
            string location,time;
            int intensity = 0;
            Console.WriteLine("Enter Location");
            location = Console.ReadLine();
            Console.WriteLine("Enter Time in 24 hour format");
            time = Console.ReadLine();
            while(time.Count()!=2)
            {
                Console.WriteLine("Please enter time in correct format i.e. 24 hour format");
                time = Console.ReadLine();
            }
            Console.WriteLine("Enter Intensity in range of 0-10");
            intensity = Convert.ToInt32(Console.ReadLine());
            while(intensity<0||intensity>10)
            {
                Console.WriteLine("Please enter a number between 0-10");
                intensity = Convert.ToInt32(Console.ReadLine());
            }

            string filename;
            filename = location + ".txt";

            StreamWriter sw = new StreamWriter(filename, true);
            sw.WriteLine("{0} | {1}", time, intensity);
            sw.Close();
            Console.WriteLine("Data Added Successfully");
        }
    }
}

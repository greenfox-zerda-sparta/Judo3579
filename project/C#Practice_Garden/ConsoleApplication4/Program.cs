using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    class Program
    {
        static void Main(string[] args)
        {
            Garden garden = new Garden();
            garden.addToGarden();
            garden.WateringTheGarden(24);
            garden.WateringTheGarden(40);
            garden.WateringTheGarden(70);
        }
    }
}

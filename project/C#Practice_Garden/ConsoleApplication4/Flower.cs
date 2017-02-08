using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    public class Flower : Plant
    {
        public Flower(string color) : base(color)
        {
            type = "flower";
            this.color = color;
            wateramount = 0;
            minimumwateramount = 5;
            absorb = 0.75;
        }
    }
}

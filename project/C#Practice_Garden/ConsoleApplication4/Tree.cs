using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    public class Tree : Plant
    {
        public Tree(string color) : base(color)
        {
            type = "tree";
            this.color = color;
            wateramount = 0;
            minimumwateramount = 10;
            absorb = 0.4;
        }
    }
}

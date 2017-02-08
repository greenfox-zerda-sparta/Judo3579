using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    public abstract class Plant
    {
        protected string type;
        protected string color;
        protected double wateramount;
        protected double minimumwateramount;
        protected double absorb;

        public bool NeedWater
        {
            get
            {
                if (wateramount <= minimumwateramount)
                {
                    return true;
                }
                return false;
            }
           
        }

        public double WaterAmount
        {
            get
            {
                return wateramount;
            }
        }

        public Plant(string color)
        {
            this.color = color;
        }
        
        public void Watering (double water)
        {
            wateramount += (absorb * water);
        }

        public string Color
        {
            get
            {
                return color;
            }
        }

        public string Type
        {
            get
            {
                return type;
            }
        }

    }
}

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication4
{
    class Garden
    {
        private List<Plant> plants;

        public Garden()
        {
            plants = new List<Plant>();
        }

        public void addToGarden()
        {
            plants.Add(new Flower("yellow"));

            plants.Add(new Flower("blue"));

            plants.Add(new Tree("purple"));

            plants.Add(new Tree("orange"));
        }

        public int CountPlantNeedWater()
        {
            int count = 0;
            foreach (Plant element in plants)
            {
                if (element.NeedWater)
                {
                    count++;
                }
            }
            return count;
        }

        public void WateringTheGarden(double wateramount)
        {
            int plantcount = CountPlantNeedWater();
            foreach (Plant element in plants)
            {
                if (element.NeedWater)
                {
                    element.Watering(wateramount / plantcount);
                    Console.WriteLine("Watered");
                }
            }
        }
    }
}     

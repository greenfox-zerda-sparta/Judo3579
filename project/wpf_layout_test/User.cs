using GalaSoft.MvvmLight;
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SimpleMVVM
{
    public class User : ObservableObject
    {
        private string name;
        private int age;
        private string subject;


        public string Name
        {
            get { return name; }
            set
            {
                Set<string>(()=> Name, ref name, value);
            }
        }

        public int Date
        {
            get { return age; }
            set
            {
                Set<int>(()=> Date, ref age, value);
            }
        }

        public string Subject
        {
            get
            {
                return subject;
            }

            set
            {
                Set<string>(() => Subject, ref subject, value);
            }
        }

        public static ObservableCollection<User> GenerateDummyUsers()
        {
            var result = new ObservableCollection<User>();

            result.Add(new User() { Date = 23, Name = "Józsi", Subject ="XY"});
            result.Add(new User() { Date = 24, Name = "Feri", Subject = "XY" });
            result.Add(new User() { Date = 25, Name = "Laci", Subject = "XY" });
            result.Add(new User() { Date = 26, Name = "Sanyi", Subject = "XY" });

            return result;
        }
    }
}

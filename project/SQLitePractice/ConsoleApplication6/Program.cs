using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ConsoleApplication6
{
    class Program
    {
        static void Main(string[] args)
        {
            TableCreator table = new TableCreator();
            table.SelectFromDatabase();

            using (EmailContext emailsdb = new EmailContext())
            {
                emailsdb.Database.Migrate();
                Email myMail = new Email() { id = 1024, subject = "kutya" };
                emailsdb.Add(myMail);
                emailsdb.SaveChanges();

                var query = from list in emailsdb.EmailTable
                            orderby list.id
                            select list;
                foreach (var item in query)
                {
                    Console.WriteLine(item.subject);
                }
            }
        }
    }
}

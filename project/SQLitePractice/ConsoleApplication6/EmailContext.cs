using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Microsoft.EntityFrameworkCore;

namespace ConsoleApplication6
{
    class EmailContext : DbContext
    {
        public DbSet<Email> EmailTable { get; set; }
        protected override void OnConfiguring(DbContextOptionsBuilder optionsbuilder)
        {
            optionsbuilder.UseSqlite("Filename=emailsdb.sqlite");
        }
    }

    public class Email
    {
        public int id { get; set; }
        public string subject { get; set; }
    }
}


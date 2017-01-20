using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using MailKit.Net.Smtp;
using MailKit;
using MimeKit;
using System.IO;
using MimeKit.Utils;


namespace SMTP_WPF
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
            ok.MouseLeftButtonUp += new MouseButtonEventHandler(ok_Click);
        }

        private void ok_Click(object sender, RoutedEventArgs e)
        {
            var message = new MimeMessage();
            message.From.Add(new MailboxAddress("peridot.zerda@gmail.com"));
            message.To.Add(new MailboxAddress(emailAddress.Text));
            message.Subject = subject.Text;

            var builder = new BodyBuilder();

            // Set the plain-text version of the message text
            builder.TextBody = textBody.Text;

            // Now we just need to set the message body and we're done
            message.Body = builder.ToMessageBody();


            using (var client = new SmtpClient())
            {
                client.Connect("smtp.gmail.com", 587, false);

                // Note: since we don't have an OAuth2 token, disable
                // the XOAUTH2 authentication mechanism.
                client.AuthenticationMechanisms.Remove("XOAUTH2");

                // Note: only needed if the SMTP server requires authentication
                client.Authenticate("peridot.zerda@gmail.com", "zerda.peridot");

                client.Send(message);
                client.Disconnect(true);
            }
        }
    }
}

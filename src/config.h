#define VERSION  "0.0.8"
#define AUTHOR   "Daniel Roberson"

#define LOGFILE  "ssh-honeypot.log"              /* default log location */
#define PIDFILE  "ssh-honeypot.pid"              /* default pid file location */
#define PORT     22                              /* default port - change the ssh port on your own server to listen to something else then port 22 or the honeypot won't work on port 22 */
#define RSAKEY   "ssh-honeypot.rsa"              /* default RSA key */
#define BINDADDR "0.0.0.0"                       /* default bind address */

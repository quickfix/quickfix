$kidpid = fork;

if($kidpid == 0) {
	chdir("..");
	exec("debug/quickfix -t server -f cfg/at_server_test.cfg");
}
sleep(6000);
`bash -c "./runall"`;

kill($kidpid);
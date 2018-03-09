#include "scheduling_simulator.h"

void hw_suspend(int msec_10)
{
	return;
}

void hw_wakeup_pid(int pid)
{
	return;
}

int hw_wakeup_taskname(char *task_name)
{
    return 0;
}

int hw_task_create(char *task_name)
{
	if (simulating) {
		ready_queue.add(task_name, pid, "S");
		return pid;
	} else {
		return pid;
	}
    return 0; // the pid of created task name
}

int main()
{
	while(1) {
		while(!start){
			scanf();
			/// add		///
			if (argv[1] == "add") {
				pid[taskcount] = hw_task_create(argv[2]);
				quantum = S;
				if (argv[3] == "-t")
					quantum = argv[4];
				ready_queue.add(argv[2], pid[taskcount], quantum);
			}
			/// remove	///
			else if (argv[1] == "remove") {
				for (int i=0; i<=taskcount; i++)
					if (pid[i] == atoi(argv[2]))
						ready_queue.remove(pid[i]);
			}
			/// ps		///
			else if (argv[1] == "ps") {
				for (int i=0; i<=taskcont; i++)
					printf("pid\ttaskname\ttaskstate\tqueueingtime\n");
			}
			/// start	///
			else if (argv[1] == "start") {
				start = true;
			}
		}
		simulating...
	}
	return 0;
}

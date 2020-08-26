/*Md Aminul Islam Tushar
201710063
Course Code : CSE-3631
Course Title : Operating System Design
Sec : A
Assignment on CPU Scheduling Algorithms*/
#include<bits/stdc++.h>
using namespace std;
//Global Variable
long ct,tt,wt;
double atat,awt;
//File obj.
ofstream myfile;
void fcfs(int AT, string s, int BT)
{
    ct+=BT;
    tt=ct-AT;
    wt=tt-BT;
    if(wt<0 || tt<0)
        wt=0,tt=0;
    myfile<<s<<"\t"<<BT<<"\t"<<AT<<"\t"<<ct<<"\t"<<tt<<"\t"<<wt<<"\n";
    cout<<s<<"\t"<<BT++<<"\t"<<AT++<<"\t"<<ct<<"\t"<<tt<<"\t"<<wt<<"\n";
    atat+=tt;
    awt+=wt;
}

void npp(int AT, string s, int BT,int prio)
{
    ct+=BT;
    tt=ct-AT;
    wt=tt-BT;
    if(wt<0 || tt<0)
        wt=0,tt=0;
    myfile<<s<<"\t"<<BT<<"\t"<<AT<<"\t"<<ct<<"\t"<<tt<<"\t"<<wt<<"\n";
    cout<<s<<"\t"<<BT++<<"\t"<<AT++<<"\t"<<ct<<"\t"<<tt<<"\t"<<wt<<"\n";
}

int main()
{
    //Random Number Start function
    srand(time(0));
    //Variable for all
    long long n,q,BT,AT,Pri;
    string s;
    map<string,double>fnreslt1;
    map<string,double>::iterator fnresltit1;
    map<string,double>fnreslt2;
    map<string,double>::iterator fnresltit2;
    map<double,string>fnreslt3;
    map<double,string>::iterator fnresltit3;
    //Variable for FCFS
    map<int,map<string,int>> mp;
    map<string,int> mp2;
    map<int,map<string,int>>::iterator it;
    map<string,int>::iterator it2;
    map<string,int>::iterator it3;
    //File Create
    myfile.open ("201710063.txt");
    //Input number of process and Quantum Time
    cin>>n>>q;
    //Variable for Round Robin
    vector<int>at(n),bt(n),rt(n),atm(n),btm(n),rtm(n);

    //Variable for Preemptive priority
    vector<int>prio(n);
    //Generate Random Number for BT,AT,Priority
    if((n>0 || n<101) && (q>0 || q<17))
    {
        cout<<"\nSample Output: \nProcess\tBT\tAT\tPriority\n";
        myfile<<"Sample Output: \nProcess\tBT\tAT\tPriority\n";
        for(int i=1; i<=n; i++)
        {
            //Random Number generate function
            BT=(rand() % 100) + 1;
            AT=(rand() % 25) + 1;
            Pri=(rand() % 127) + 1;
            cout<<"PID"<<i<<"\t"<<BT<<"\t"<<AT<<"\t"<<Pri<<endl;
            myfile<<"PID"<<i<<"\t"<<BT<<"\t"<<AT<<"\t"<<Pri<<"\n";
            at[i-1]=AT;
            bt[i-1]=BT;
            rt[i-1]=bt[i-1];
            prio[i-1]=Pri;
            s=to_string(i);
            mp[AT].insert(make_pair("PID"+s,BT));
            mp2["PID"+s]=Pri;
        }

        //FCFS
        ct=0,tt=0,wt=0,atat=0,awt=0;
        cout<<"\nFCFS\n";
        cout<<"Process\tBT\tAT\tCT\tTT\tWT\n";
        myfile<<"\nFCFS\nProcess\tBT\tAT\tCT\tTT\tWT\n";
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            for(it2=it->second.begin(); it2!=it->second.end(); it2++)
            {
                fcfs(it->first,it2->first,it2->second);
            }
        }
        fnreslt1["FCFS"]=atat/n;
        fnreslt2["FCFS"]=awt/n;

        //Preemptive SJF
        ct=0;
        cout<<"\nPreemptive SJF\n";
        cout<<"Process\tBT\tAT\tCT\tTT\tWT\n";
        myfile<<"\nPreemptive SJF\nProcess\tBT\tAT\tCT\tTT\tWT\n";

        int sjftemp,sjftt=0,sjfmin,sjfd;
        float sjfatat=0,sjfawt=0,sjfstat=0,sjfswt=0;
        vector<int> sjfa(n),sjfb(n),sjfe(n),sjftat(n),sjfwt(n);
        for(int i=0; i<n; i++)
        {
            sjfa[i]=at[i];
            sjfb[i]=bt[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(sjfb[i]>sjfb[j])
                {
                    sjftemp=sjfa[i];
                    sjfa[i]=sjfa[j];
                    sjfa[j]=sjftemp;

                    sjftemp=sjfb[i];
                    sjfb[i]=sjfb[j];
                    sjfb[j]=sjftemp;
                }
            }
        }
        sjfmin=sjfa[0];
        for(int i=0; i<n; i++)
        {
            if(sjfmin>sjfa[i])
            {
                sjfmin=sjfa[i];
                sjfd=i;
            }
        }
        sjftt=sjfmin;
        sjfe[sjfd]=sjftt+sjfb[sjfd];
        sjftt=sjfe[sjfd];

        for(int i=0; i<n; i++)
        {
            if(sjfa[i]!=sjfmin)
            {
                sjfe[i]=sjfb[i]+sjftt;
                sjftt=sjfe[i];
            }
        }
        for(int i=0; i<n; i++)
        {

            sjftat[i]=sjfe[i]-sjfa[i];
            sjfstat=sjfstat+sjftat[i];
            sjfwt[i]=sjftat[i]-sjfb[i];
            sjfswt=sjfswt+sjfwt[i];
        }
        for(int i=0; i<n; i++)
            cout<<"PID"<<i+1<<"\t"<<sjfb[i]<<"\t"<<sjfa[i]<<"\t"<<ct<<"\t"<<sjftat[i]<<"\t"<<sjfwt[i]<<endl;

        fnreslt1["Preemptive SJF"]=sjfstat/n;
        fnreslt2["Preemptive SJF"]=sjfswt/n;

        //Non-Preemptive Priority
        ct=0,tt=0,wt=0;
        cout<<"\nNon-Preemptive Priority\n";
        cout<<"Process\tBT\tAT\tCT\tTT\tWT\n";
        myfile<<"\nNon-Preemptive Priority\nProcess\tBT\tAT\tCT\tTT\tWT\n";
        BT=1,AT=0,Pri=0;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            for(it2=it->second.begin(); it2!=it->second.end(); it2++)
            {
                int prio=mp2[it2->first];
                npp(it->first,it2->first,it2->second,prio);
            }
        }
        fnreslt1["Non-Preemptive Priority"]=fnreslt1["FCFS"];
        fnreslt2["Non-Preemptive Priority"]=fnreslt2["FCFS"];

        //Preemptive Priority
        ct=0,tt=0,wt=0,atat=0,awt=0;
        cout<<"\nPreemptive Priority\n";
        cout<<"Process\tBT\tAT\tCT\tTT\tWT\n";
        myfile<<"\nPreemptive Priority\nProcess\tBT\tAT\tCT\tTT\tWT\n";

        vector<int>ppa(n),ppb(n),ppx(n),ppwt(n),ppta(n),ppc(n),p(n);
        int smallest,count=0;
        double avg=0,tt=0,end;
        for(int i=0; i<n; i++)
        {
            ppa[i]=at[i];
            ppb[i]=bt[i];
            ppx[i]=bt[i];
            p[i]=prio[i];
        }

        for(int time=0; count!=n; time++)
        {
            smallest=n;
            for(int i=0; i<n; i++)
            {
                if(ppa[i]<=time && p[i]>p[smallest] && ppb[i]>0 )
                    smallest=i;
            }
            ppb[smallest]--;
            if(ppb[smallest]==0)
            {
                count++;
                end=time+1;
                ppc[smallest] = end;
                ppwt[smallest] = end - ppa[smallest] - ppx[smallest];
                ppta[smallest] = end - ppa[smallest];
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<"PID"<<i+1<<"\t"<<ppx[i]<<"\t"<<ppa[i]<<"\t"<<ppwt[i]<<"\t"<<ppta[i]<<"\t"<<ppc[i]<<endl;
            myfile<<"PID"<<i+1<<"\t"<<ppx[i]<<"\t"<<ppa[i]<<"\t"<<ppwt[i]<<"\t"<<ppta[i]<<"\t"<<ppc[i]<<endl;
            avg+=ppwt[i];
            tt+=ppta[i];
        }
        fnreslt1["Preemptive Priority"]=avg/n;
        fnreslt2["Preemptive Priority"]=tt/n;

        //RR Algorithm
        ct=0;
        cout<<"\nRR\n";
        cout<<"Process\tBT\tAT\tCT\tTT\tWT\n";
        myfile<<"\nRR\nProcess\tBT\tAT\tCT\tTT\tWT\n";
        int j,time,remain,temps=0,wt=0,tat=0;
        remain=n;

        for(int time=0,j=0; remain!=0;)
        {
            if(rt[j]<=q && rt[j]>0)
            {
                time += rt[j];
                rt[j]=0;
                temps=1;
                ct+=4;
            }

            else if(rt[j]>0)
            {
                rt[j] -= q;
                time += q;
                ct+=4;
            }

            if(rt[j]==0 && temps==1)
            {
                ct+=bt[j];
                remain--;
                cout<<"PID"<<j+1<<"\t"<<bt[j]<<"\t"<<at[j]<<"\t"<<ct<<"\t"<<time-at[j]<<"\t"<<time-at[j]-bt[j]<<endl;
                myfile<<"PID"<<j+1<<"\t"<<bt[j]<<"\t"<<at[j]<<"\t"<<ct<<"\t"<<time-at[j]<<"\t"<<time-at[j]-bt[j]<<"\n";
                wt += time-at[j]-bt[j];
                tat += time-at[j];
                temps=0;
            }

            if(j == n-1)
                j=0;
            else if(at[j+1] <= time)
                j++;
            else
                j=0;
        }

        fnreslt1["RR"]=wt*1.0/n;
        fnreslt2["RR"]=tat*1.0/n;

        cout<<"\nCPU Scheduling Algorithm\tAverage WT\tAverage TT\n";
        myfile<<"\nCPU Scheduling Algorithm\tAverage WT\tAverage TT\n";
        for(fnresltit1=fnreslt1.begin(),fnresltit2=fnreslt2.begin();fnresltit1!=fnreslt1.end();fnresltit1++,fnresltit2++)
        {
            cout<<fnresltit2->first<<"\t\t\t\t"<<fnresltit2->second<<"\t\t"<<fnresltit1->second<<endl;
            fnreslt3[fnresltit2->second]=fnresltit1->first;
            myfile<<fnresltit2->first<<"\t\t\t\t"<<fnresltit2->second<<"\t\t"<<fnresltit1->second<<endl;
        }

        for(fnresltit3=fnreslt3.begin();fnresltit3!=fnreslt3.end();fnresltit3++)
        {
            cout<<"\n"<<fnresltit3->second<<" performed better with average waiting time: "<<fnresltit3->first<<"ms"<<endl;
            myfile<<"\n"<<fnresltit3->second<<" performed better with average waiting time: "<<fnresltit3->first<<"ms"<<endl;
            break;
        }

        cout<<"\nCoded By : 201710063, Md Aminul Islam Tushar, August, 2020";
        myfile<<"\nCoded By : 201710063, Md Aminul Islam Tushar, August, 2020";
        myfile.close();
    }
    else
    {
        cout<<"Invalid Input\nCoded By : 201710063, Md Aminul Islam Tushar, August, 2020";
        myfile<<"Invalid Input\nCoded By : 201710063, Md Aminul Islam Tushar, August, 2020";
        myfile.close();
    }
    return 0;
}

/*I hereby declare upon my word of honor that I have neither given nor
received unauthorized assistance on this assignment.
Signed by: Md Aminul Islam Tushar, 24.08.2020*/

﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Threading;

namespace jtahstu_akoj轰炸机 {
    class Program {
        static void Main(string[] args) {
            System.Net.WebClient client = new WebClient();
            //P0-P20 共20道题P1025跳了
            string[] P0_20 ={
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081095",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081129",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081193",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081203",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081221",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081231",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081239",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081265",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081413",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081419",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081427",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081527",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081589",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081615",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081653",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081685",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081705",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081717",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081723",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48081725"
                           };
            string[] P1021_40 ={
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084837",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084847",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084851",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084901",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084911",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084913",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084923",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084937",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084955",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48084963",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085097",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085107",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085113",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085115",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085129",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085141",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085153",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085159",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085183",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085203"
                               };
            string[] P1041_60 ={
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085219",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085441",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085453",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085465",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085519",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085531",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085539",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085553",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085563",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48085567",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088405",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088409",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088415",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088427",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088439",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088445",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088461",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088469",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088487",
                                "http://blog.csdn.net/jtahstu_akoj/article/details/48088497"
                               };
            for (int i = 1 ; i <= (P1041_60.Length * 1500 + 10) ; i++) {
                try {
                    Stream strm = client.OpenRead(P1041_60[i % 20]);
                    strm.Close();
                    Console.WriteLine("正在执行第{0}次轰炸" , i);
                    if (i % 100 == 0)
                        Console.WriteLine("哎呦，不错呦 O(∩_∩)O~");
                    if (i % 200 == 0)
                        Console.WriteLine("哎呦，太牛X了 O(∩_∩)O~");
                    if (i % 500 == 0)
                        Console.WriteLine("哎呦，程序已经暴走 O(∩_∩)O~");
                    if (i % 1000 == 0)
                        Console.WriteLine("哎呦，这是要超神的节奏 O(∩_∩)O~");
                    if (i % 2000 == 0)
                        Console.WriteLine("哎呦，虽然很装逼，可不要贪杯哦 O(∩_∩)O~");
                    if (i % 4000 == 0)
                        Console.WriteLine("哎呦，装逼有点过度哦 O(∩_∩)O~");
                    if (i % 80000 == 0)
                        Console.WriteLine("哎呦，叼的一比哦 O(∩_∩)O~");
                    if (i % 10000 == 0)
                        Console.WriteLine("哎呦，赶紧关了吧，电脑要炸了 O(∩_∩)O~");
                } catch (Exception e) {
                    Console.WriteLine(e.Message);
                    continue;
                }
            }
        }
    }
}



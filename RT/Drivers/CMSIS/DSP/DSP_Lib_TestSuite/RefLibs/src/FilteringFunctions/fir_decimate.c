??# i n c l u d e   " r e f . h "  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f 3 2 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ f 3 2   *   S ,  
     f l o a t 3 2 _ t   *   p S r c ,  
     f l o a t 3 2 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     f l o a t 3 2 _ t   * p S t a t e   =   S - > p S t a t e ;                                   / *   S t a t e   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p C o e f f s   =   S - > p C o e f f s ;                               / *   C o e f f i c i e n t   p o i n t e r   * /  
     f l o a t 3 2 _ t   * p S t a t e C u r n t ;                                                 / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     f l o a t 3 2 _ t   s u m 0 ;                                                                 / *   A c c u m u l a t o r   * /  
     f l o a t 3 2 _ t   x 0 ,   c 0 ;                                                             / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   f i l t e r   c o e f f i c i e n t s   i n   t h e   f i l t e r   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;     	 	 	 	 	 	 	 	 	   	 	 	 	   / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   n u m T a p s   -   1 U ;  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   b l o c k S i z e   /   S - > M ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         s u m 0   =   0 . 0 f ;  
  
 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   p C o e f f s [ i ] ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   p S t a t e [ i ] ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
 	 	 }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   + =   S - > M ;  
  
         / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   s u m 0 ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     / *   C o p y   n u m T a p s   n u m b e r   o f   v a l u e s   * /  
     i   =   n u m T a p s   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ q 3 1 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 6 3 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;     	 	 	 	 	 	 	 	 	 	 	 	 	   / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   n u m T a p s   -   1 U ;  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   b l o c k S i z e   /   S - > M ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   p C o e f f s [ i ] ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   p S t a t e [ i ] ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   ( q 6 3 _ t ) x 0   *   c 0 ;  
 	 	 }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( s u m 0   > >   3 1 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   n u m T a p s   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f a s t _ q 3 1 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 3 1   *   S ,  
     q 3 1 _ t   *   p S r c ,  
     q 3 1 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 3 1 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 3 1 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 3 1 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 3 1 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;     	 	 	 	 	 	 	 	 	 	 	 	 	   / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   n u m T a p s   -   1 U ;  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   b l o c k S i z e   /   S - > M ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   p C o e f f s [ i ] ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   p S t a t e [ i ] ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
 	 	 	 s u m 0   =   ( q 3 1 _ t ) ( ( ( ( q 6 3 _ t )   s u m 0   < <   3 2 )   +   ( ( q 6 3 _ t )   x 0   *   c 0 ) )   > >   3 2 ) ;  
 	 	 }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   ( q 3 1 _ t )   ( s u m 0   < <   1 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   n u m T a p s   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 3 1 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 6 3 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;     	 	 	 	 	 	 	 	 	 	 	 	 	   / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   n u m T a p s   -   1 U ;  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   b l o c k S i z e   /   S - > M ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   p C o e f f s [ i ] ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   p S t a t e [ i ] ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   ( q 3 1 _ t ) x 0   *   c 0 ;  
 	 	 }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   r e f _ s a t _ q 1 5 ( s u m 0   > >   1 5 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   n u m T a p s   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
 v o i d   r e f _ f i r _ d e c i m a t e _ f a s t _ q 1 5 (  
     c o n s t   a r m _ f i r _ d e c i m a t e _ i n s t a n c e _ q 1 5   *   S ,  
     q 1 5 _ t   *   p S r c ,  
     q 1 5 _ t   *   p D s t ,  
     u i n t 3 2 _ t   b l o c k S i z e )  
 {  
     q 1 5 _ t   * p S t a t e   =   S - > p S t a t e ;                                           / *   S t a t e   p o i n t e r   * /  
     q 1 5 _ t   * p C o e f f s   =   S - > p C o e f f s ;                                       / *   C o e f f i c i e n t   p o i n t e r   * /  
     q 1 5 _ t   * p S t a t e C u r n t ;                                                         / *   P o i n t s   t o   t h e   c u r r e n t   s a m p l e   o f   t h e   s t a t e   * /  
     q 1 5 _ t   x 0 ,   c 0 ;                                                                     / *   T e m p o r a r y   v a r i a b l e s   t o   h o l d   s t a t e   a n d   c o e f f i c i e n t   v a l u e s   * /  
     q 3 1 _ t   s u m 0 ;                                                                         / *   A c c u m u l a t o r   * /  
     u i n t 3 2 _ t   n u m T a p s   =   S - > n u m T a p s ;                                   / *   N u m b e r   o f   t a p s   * /  
     u i n t 3 2 _ t   i ,   b l k C n t ;     	 	 	 	 	 	 	 	 	 	 	 	 	   / *   L o o p   c o u n t e r s   * /  
  
     / *   S - > p S t a t e   b u f f e r   c o n t a i n s   p r e v i o u s   f r a m e   ( n u m T a p s   -   1 )   s a m p l e s   * /  
     / *   p S t a t e C u r n t   p o i n t s   t o   t h e   l o c a t i o n   w h e r e   t h e   n e w   i n p u t   d a t a   s h o u l d   b e   w r i t t e n   * /  
     p S t a t e C u r n t   =   S - > p S t a t e   +   n u m T a p s   -   1 U ;  
  
     / *   T o t a l   n u m b e r   o f   o u t p u t   s a m p l e s   t o   b e   c o m p u t e d   * /  
     b l k C n t   =   b l o c k S i z e   /   S - > M ;  
  
     w h i l e   ( b l k C n t   >   0 U )  
     {  
         / *   C o p y   d e c i m a t i o n   f a c t o r   n u m b e r   o f   n e w   i n p u t   s a m p l e s   i n t o   t h e   s t a t e   b u f f e r   * /  
         i   =   S - > M ;  
  
         d o  
         {  
             * p S t a t e C u r n t + +   =   * p S r c + + ;  
  
         }   w h i l e   ( - - i ) ;  
  
         / *   S e t   a c c u m u l a t o r   t o   z e r o   * /  
         s u m 0   =   0 ;  
  
 	 	 f o r ( i = 0 ; i < n u m T a p s ; i + + )  
 	 	 {  
             / *   R e a d   c o e f f i c i e n t s   * /  
             c 0   =   p C o e f f s [ i ] ;  
  
             / *   F e t c h   1   s t a t e   v a r i a b l e   * /  
             x 0   =   p S t a t e [ i ] ;  
  
             / *   P e r f o r m   t h e   m u l t i p l y - a c c u m u l a t e   * /  
             s u m 0   + =   x 0   *   c 0 ;  
 	 	 }  
  
         / *   A d v a n c e   t h e   s t a t e   p o i n t e r   b y   t h e   d e c i m a t i o n   f a c t o r                        
           *   t o   p r o c e s s   t h e   n e x t   g r o u p   o f   d e c i m a t i o n   f a c t o r   n u m b e r   s a m p l e s   * /  
         p S t a t e   =   p S t a t e   +   S - > M ;  
  
         / *   T h e   r e s u l t   i s   i n   t h e   a c c u m u l a t o r ,   s t o r e   i n   t h e   d e s t i n a t i o n   b u f f e r .   * /  
         * p D s t + +   =   r e f _ s a t _ q 1 5 ( s u m 0   > >   1 5 ) ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         b l k C n t - - ;  
     }  
  
     / *   P r o c e s s i n g   i s   c o m p l e t e .                    
       * *   N o w   c o p y   t h e   l a s t   n u m T a p s   -   1   s a m p l e s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r .                
       * *   T h i s   p r e p a r e s   t h e   s t a t e   b u f f e r   f o r   t h e   n e x t   f u n c t i o n   c a l l .   * /  
  
     / *   P o i n t s   t o   t h e   s t a r t   o f   t h e   s t a t e   b u f f e r   * /  
     p S t a t e C u r n t   =   S - > p S t a t e ;  
  
     i   =   n u m T a p s   -   1 U ;  
  
     / *   c o p y   d a t a   * /  
     w h i l e   ( i   >   0 U )  
     {  
         * p S t a t e C u r n t + +   =   * p S t a t e + + ;  
  
         / *   D e c r e m e n t   t h e   l o o p   c o u n t e r   * /  
         i - - ;  
     }  
 }  
  
??/ *  
   *   C o p y r i g h t   ( c )   2 0 1 3 - 2 0 1 7   A R M   L i m i t e d .   A l l   r i g h t s   r e s e r v e d .  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   L i c e n s e d   u n d e r   t h e   A p a c h e   L i c e n s e ,   V e r s i o n   2 . 0   ( t h e   L i c e n s e ) ;   y o u   m a y  
   *   n o t   u s e   t h i s   f i l e   e x c e p t   i n   c o m p l i a n c e   w i t h   t h e   L i c e n s e .  
   *   Y o u   m a y   o b t a i n   a   c o p y   o f   t h e   L i c e n s e   a t  
   *  
   *   w w w . a p a c h e . o r g / l i c e n s e s / L I C E N S E - 2 . 0  
   *  
   *   U n l e s s   r e q u i r e d   b y   a p p l i c a b l e   l a w   o r   a g r e e d   t o   i n   w r i t i n g ,   s o f t w a r e  
   *   d i s t r i b u t e d   u n d e r   t h e   L i c e n s e   i s   d i s t r i b u t e d   o n   a n   A S   I S   B A S I S ,   W I T H O U T  
   *   W A R R A N T I E S   O R   C O N D I T I O N S   O F   A N Y   K I N D ,   e i t h e r   e x p r e s s   o r   i m p l i e d .  
   *   S e e   t h e   L i c e n s e   f o r   t h e   s p e c i f i c   l a n g u a g e   g o v e r n i n g   p e r m i s s i o n s   a n d  
   *   l i m i t a t i o n s   u n d e r   t h e   L i c e n s e .  
   *  
   *   - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  
   *  
   *   $ D a t e :                 1 0 .   J a n u a r y   2 0 1 7  
   *   $ R e v i s i o n :         V 1 . 2  
   *  
   *   P r o j e c t :             C M S I S - R T O S   A P I   V 1  
   *   T i t l e :                 c m s i s _ o s _ v 1 . c   V 1   m o d u l e   f i l e  
   * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - * /  
  
 # i n c l u d e   < s t r i n g . h >  
 # i n c l u d e   " c m s i s _ o s . h "  
  
 # i f   ( o s C M S I S   > =   0 x 2 0 0 0 0 U )  
  
  
 / /   T h r e a d  
 o s T h r e a d I d   o s T h r e a d C r e a t e   ( c o n s t   o s T h r e a d D e f _ t   * t h r e a d _ d e f ,   v o i d   * a r g u m e n t )   {  
  
     i f   ( t h r e a d _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s T h r e a d I d ) N U L L ;  
     }  
     r e t u r n   o s T h r e a d N e w ( ( o s T h r e a d F u n c _ t ) t h r e a d _ d e f - > p t h r e a d ,   a r g u m e n t ,   & t h r e a d _ d e f - > a t t r ) ;  
 }  
  
  
 / /   S i g n a l s  
  
 # d e f i n e   S i g n a l M a s k   ( ( 1 U < < o s F e a t u r e _ S i g n a l s ) - 1 U )  
  
 i n t 3 2 _ t   o s S i g n a l S e t   ( o s T h r e a d I d   t h r e a d _ i d ,   i n t 3 2 _ t   s i g n a l s )   {  
     u i n t 3 2 _ t   f l a g s ;  
  
     f l a g s   =   o s T h r e a d F l a g s S e t ( t h r e a d _ i d ,   ( u i n t 3 2 _ t ) s i g n a l s ) ;  
     i f   ( ( f l a g s   &   0 x 8 0 0 0 0 0 0 0 U )   ! =   0 U )   {  
         r e t u r n   ( ( i n t 3 2 _ t ) 0 x 8 0 0 0 0 0 0 0 U ) ;  
     }  
     r e t u r n   ( ( i n t 3 2 _ t ) ( f l a g s   &   ~ ( ( u i n t 3 2 _ t ) s i g n a l s ) ) ) ;  
 }  
  
 i n t 3 2 _ t   o s S i g n a l C l e a r   ( o s T h r e a d I d   t h r e a d _ i d ,   i n t 3 2 _ t   s i g n a l s )   {  
     u i n t 3 2 _ t   f l a g s ;  
  
     i f   ( t h r e a d _ i d   ! =   o s T h r e a d G e t I d ( ) )   {  
         r e t u r n   ( ( i n t 3 2 _ t ) 0 x 8 0 0 0 0 0 0 0 U ) ;  
     }  
     f l a g s   =   o s T h r e a d F l a g s C l e a r ( ( u i n t 3 2 _ t ) s i g n a l s ) ;  
     i f   ( ( f l a g s   &   0 x 8 0 0 0 0 0 0 0 U )   ! =   0 U )   {  
         r e t u r n   ( ( i n t 3 2 _ t ) 0 x 8 0 0 0 0 0 0 0 U ) ;  
     }  
     r e t u r n   ( ( i n t 3 2 _ t ) f l a g s ) ;  
 }  
  
 o s E v e n t   o s S i g n a l W a i t   ( i n t 3 2 _ t   s i g n a l s ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s E v e n t     e v e n t ;  
     u i n t 3 2 _ t   f l a g s ;  
  
     i f   ( s i g n a l s   ! =   0 )   {  
         f l a g s   =   o s T h r e a d F l a g s W a i t ( ( u i n t 3 2 _ t ) s i g n a l s ,   o s F l a g s W a i t A l l ,   m i l l i s e c ) ;  
     }   e l s e   {  
         f l a g s   =   o s T h r e a d F l a g s W a i t ( S i g n a l M a s k ,                 o s F l a g s W a i t A n y ,   m i l l i s e c ) ;  
     }  
     i f   ( ( f l a g s   >   0 U )   & &   ( f l a g s   <   0 x 8 0 0 0 0 0 0 0 U ) )   {  
         e v e n t . s t a t u s   =   o s E v e n t S i g n a l ;  
         e v e n t . v a l u e . s i g n a l s   =   ( i n t 3 2 _ t ) f l a g s ;  
     }   e l s e   {  
         s w i t c h   ( ( i n t 3 2 _ t ) f l a g s )   {  
             c a s e   o s E r r o r R e s o u r c e :  
                 e v e n t . s t a t u s   =   o s O K ;  
                 b r e a k ;  
             c a s e   o s E r r o r T i m e o u t :  
                 e v e n t . s t a t u s   =   o s E v e n t T i m e o u t ;  
                 b r e a k ;  
             c a s e   o s E r r o r P a r a m e t e r :  
                 e v e n t . s t a t u s   =   o s E r r o r V a l u e ;  
                 b r e a k ;  
             d e f a u l t :  
                 e v e n t . s t a t u s   =   ( o s S t a t u s ) f l a g s ;  
                 b r e a k ;  
         }  
     }  
     r e t u r n   e v e n t ;  
 }  
  
  
 / /   T i m e r  
 o s T i m e r I d   o s T i m e r C r e a t e   ( c o n s t   o s T i m e r D e f _ t   * t i m e r _ d e f ,   o s _ t i m e r _ t y p e   t y p e ,   v o i d   * a r g u m e n t )   {  
  
     i f   ( t i m e r _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s T i m e r I d ) N U L L ;  
     }  
     r e t u r n   o s T i m e r N e w ( ( o s T i m e r F u n c _ t ) t i m e r _ d e f - > p t i m e r ,   t y p e ,   a r g u m e n t ,   & t i m e r _ d e f - > a t t r ) ;  
 }  
  
  
 / /   M u t e x  
 o s M u t e x I d   o s M u t e x C r e a t e   ( c o n s t   o s M u t e x D e f _ t   * m u t e x _ d e f )   {  
  
     i f   ( m u t e x _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s M u t e x I d ) N U L L ;  
     }  
     r e t u r n   o s M u t e x N e w ( m u t e x _ d e f ) ;  
 }  
  
  
 / /   S e m a p h o r e  
  
 # i f   ( d e f i n e d   ( o s F e a t u r e _ S e m a p h o r e )   & &   ( o s F e a t u r e _ S e m a p h o r e   ! =   0 U ) )  
  
 o s S e m a p h o r e I d   o s S e m a p h o r e C r e a t e   ( c o n s t   o s S e m a p h o r e D e f _ t   * s e m a p h o r e _ d e f ,   i n t 3 2 _ t   c o u n t )   {  
  
     i f   ( s e m a p h o r e _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s S e m a p h o r e I d ) N U L L ;  
     }  
     r e t u r n   o s S e m a p h o r e N e w ( ( u i n t 3 2 _ t ) c o u n t ,   ( u i n t 3 2 _ t ) c o u n t ,   s e m a p h o r e _ d e f ) ;  
 }  
  
 i n t 3 2 _ t   o s S e m a p h o r e W a i t   ( o s S e m a p h o r e I d   s e m a p h o r e _ i d ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s S t a t u s _ t   s t a t u s ;  
     u i n t 3 2 _ t       c o u n t ;  
  
     s t a t u s   =   o s S e m a p h o r e A c q u i r e ( s e m a p h o r e _ i d ,   m i l l i s e c ) ;  
     s w i t c h   ( s t a t u s )   {  
         c a s e   o s O K :  
             c o u n t   =   o s S e m a p h o r e G e t C o u n t ( s e m a p h o r e _ i d ) ;  
             r e t u r n   ( ( i n t 3 2 _ t ) c o u n t   +   1 ) ;  
         c a s e   o s E r r o r R e s o u r c e :  
         c a s e   o s E r r o r T i m e o u t :  
             r e t u r n   0 ;  
         d e f a u l t :  
             b r e a k ;  
     }  
     r e t u r n   - 1 ;  
 }  
  
 # e n d i f     / /   S e m a p h o r e  
  
  
 / /   M e m o r y   P o o l  
  
 # i f   ( d e f i n e d ( o s F e a t u r e _ P o o l )   & &   ( o s F e a t u r e _ P o o l   ! =   0 ) )  
  
 o s P o o l I d   o s P o o l C r e a t e   ( c o n s t   o s P o o l D e f _ t   * p o o l _ d e f )   {  
  
     i f   ( p o o l _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s P o o l I d ) N U L L ;  
     }  
     r e t u r n   ( ( o s P o o l I d ) ( o s M e m o r y P o o l N e w ( p o o l _ d e f - > p o o l _ s z ,   p o o l _ d e f - > i t e m _ s z ,   & p o o l _ d e f - > a t t r ) ) ) ;  
 }  
  
 v o i d   * o s P o o l A l l o c   ( o s P o o l I d   p o o l _ i d )   {  
     r e t u r n   o s M e m o r y P o o l A l l o c ( ( o s M e m o r y P o o l I d _ t ) p o o l _ i d ,   0 U ) ;  
 }  
  
 v o i d   * o s P o o l C A l l o c   ( o s P o o l I d   p o o l _ i d )   {  
     v o i d         * b l o c k ;  
     u i n t 3 2 _ t   b l o c k _ s i z e ;  
  
     b l o c k _ s i z e   =   o s M e m o r y P o o l G e t B l o c k S i z e ( ( o s M e m o r y P o o l I d _ t ) p o o l _ i d ) ;  
     i f   ( b l o c k _ s i z e   = =   0 U )   {  
         r e t u r n   N U L L ;  
     }  
     b l o c k   =   o s M e m o r y P o o l A l l o c ( ( o s M e m o r y P o o l I d _ t ) p o o l _ i d ,   0 U ) ;  
     i f   ( b l o c k   ! =   N U L L )   {  
         m e m s e t ( b l o c k ,   0 ,   b l o c k _ s i z e ) ;  
     }  
     r e t u r n   b l o c k ;  
 }  
  
 o s S t a t u s   o s P o o l F r e e   ( o s P o o l I d   p o o l _ i d ,   v o i d   * b l o c k )   {  
     r e t u r n   o s M e m o r y P o o l F r e e ( ( o s M e m o r y P o o l I d _ t ) p o o l _ i d ,   b l o c k ) ;  
 }  
  
 # e n d i f     / /   M e m o r y   P o o l  
  
  
 / /   M e s s a g e   Q u e u e  
  
 # i f   ( d e f i n e d ( o s F e a t u r e _ M e s s a g e Q )   & &   ( o s F e a t u r e _ M e s s a g e Q   ! =   0 ) )  
  
 o s M e s s a g e Q I d   o s M e s s a g e C r e a t e   ( c o n s t   o s M e s s a g e Q D e f _ t   * q u e u e _ d e f ,   o s T h r e a d I d   t h r e a d _ i d )   {  
     ( v o i d ) t h r e a d _ i d ;  
  
     i f   ( q u e u e _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s M e s s a g e Q I d ) N U L L ;  
     }  
     r e t u r n   ( ( o s M e s s a g e Q I d ) ( o s M e s s a g e Q u e u e N e w ( q u e u e _ d e f - > q u e u e _ s z ,   s i z e o f ( u i n t 3 2 _ t ) ,   & q u e u e _ d e f - > a t t r ) ) ) ;  
 }  
  
 o s S t a t u s   o s M e s s a g e P u t   ( o s M e s s a g e Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   i n f o ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     r e t u r n   o s M e s s a g e Q u e u e P u t ( ( o s M e s s a g e Q u e u e I d _ t ) q u e u e _ i d ,   & i n f o ,   0 U ,   m i l l i s e c ) ;  
 }  
  
 o s E v e n t   o s M e s s a g e G e t   ( o s M e s s a g e Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s S t a t u s _ t   s t a t u s ;  
     o s E v e n t         e v e n t ;  
     u i n t 3 2 _ t       m e s s a g e ;  
  
     s t a t u s   =   o s M e s s a g e Q u e u e G e t ( ( o s M e s s a g e Q u e u e I d _ t ) q u e u e _ i d ,   & m e s s a g e ,   N U L L ,   m i l l i s e c ) ;  
     s w i t c h   ( s t a t u s )   {  
         c a s e   o s O K :  
             e v e n t . s t a t u s   =   o s E v e n t M e s s a g e ;  
             e v e n t . v a l u e . v   =   m e s s a g e ;  
             b r e a k ;  
         c a s e   o s E r r o r R e s o u r c e :  
             e v e n t . s t a t u s   =   o s O K ;  
             b r e a k ;  
         c a s e   o s E r r o r T i m e o u t :  
             e v e n t . s t a t u s   =   o s E v e n t T i m e o u t ;  
             b r e a k ;  
         d e f a u l t :  
             e v e n t . s t a t u s   =   s t a t u s ;  
             b r e a k ;  
     }  
     r e t u r n   e v e n t ;  
 }  
  
 # e n d i f     / /   M e s s a g e   Q u e u e  
  
  
 / /   M a i l   Q u e u e  
  
 # i f   ( d e f i n e d ( o s F e a t u r e _ M a i l Q )   & &   ( o s F e a t u r e _ M a i l Q   ! =   0 ) )  
  
 t y p e d e f   s t r u c t   o s _ m a i l _ q u e u e _ s   {  
     o s M e m o r y P o o l I d _ t       m p _ i d ;  
     o s M e s s a g e Q u e u e I d _ t   m q _ i d ;  
 }   o s _ m a i l _ q u e u e _ t ;  
  
 o s M a i l Q I d   o s M a i l C r e a t e   ( c o n s t   o s M a i l Q D e f _ t   * q u e u e _ d e f ,   o s T h r e a d I d   t h r e a d _ i d )   {  
     o s _ m a i l _ q u e u e _ t   * p t r ;  
     ( v o i d ) t h r e a d _ i d ;  
  
     i f   ( q u e u e _ d e f   = =   N U L L )   {  
         r e t u r n   ( o s M a i l Q I d ) N U L L ;  
     }  
  
     p t r   =   q u e u e _ d e f - > m a i l ;  
     i f   ( p t r   = =   N U L L )   {  
         r e t u r n   ( o s M a i l Q I d ) N U L L ;  
     }  
  
     p t r - > m p _ i d   =   o s M e m o r y P o o l N e w     ( q u e u e _ d e f - > q u e u e _ s z ,   q u e u e _ d e f - > i t e m _ s z ,   & q u e u e _ d e f - > m p _ a t t r ) ;  
     p t r - > m q _ i d   =   o s M e s s a g e Q u e u e N e w ( q u e u e _ d e f - > q u e u e _ s z ,   s i z e o f ( v o i d   * ) ,   & q u e u e _ d e f - > m q _ a t t r ) ;  
     i f   ( ( p t r - > m p _ i d   = =   ( o s M e m o r y P o o l I d _ t ) N U L L )   | |   ( p t r - > m q _ i d   = =   ( o s M e s s a g e Q u e u e I d _ t ) N U L L ) )   {  
         i f   ( p t r - > m p _ i d   ! =   ( o s M e m o r y P o o l I d _ t ) N U L L )   {  
             o s M e m o r y P o o l D e l e t e ( p t r - > m p _ i d ) ;  
         }  
         i f   ( p t r - > m q _ i d   ! =   ( o s M e s s a g e Q u e u e I d _ t ) N U L L )   {  
             o s M e s s a g e Q u e u e D e l e t e ( p t r - > m q _ i d ) ;  
         }  
         r e t u r n   ( o s M a i l Q I d ) N U L L ;  
     }  
  
     r e t u r n   ( o s M a i l Q I d ) p t r ;  
 }  
  
 v o i d   * o s M a i l A l l o c   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s _ m a i l _ q u e u e _ t   * p t r   =   ( o s _ m a i l _ q u e u e _ t   * ) q u e u e _ i d ;  
  
     i f   ( p t r   = =   N U L L )   {  
         r e t u r n   N U L L ;  
     }  
     r e t u r n   o s M e m o r y P o o l A l l o c ( p t r - > m p _ i d ,   m i l l i s e c ) ;  
 }  
  
 v o i d   * o s M a i l C A l l o c   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s _ m a i l _ q u e u e _ t   * p t r   =   ( o s _ m a i l _ q u e u e _ t   * ) q u e u e _ i d ;  
     v o i d                         * b l o c k ;  
     u i n t 3 2 _ t                   b l o c k _ s i z e ;  
  
     i f   ( p t r   = =   N U L L )   {  
         r e t u r n   N U L L ;  
     }  
     b l o c k _ s i z e   =   o s M e m o r y P o o l G e t B l o c k S i z e ( p t r - > m p _ i d ) ;  
     i f   ( b l o c k _ s i z e   = =   0 U )   {  
         r e t u r n   N U L L ;  
     }  
     b l o c k   =   o s M e m o r y P o o l A l l o c ( p t r - > m p _ i d ,   m i l l i s e c ) ;  
     i f   ( b l o c k   ! =   N U L L )   {  
         m e m s e t ( b l o c k ,   0 ,   b l o c k _ s i z e ) ;  
     }  
  
     r e t u r n   b l o c k ;  
  
 }  
  
 o s S t a t u s   o s M a i l P u t   ( o s M a i l Q I d   q u e u e _ i d ,   c o n s t   v o i d   * m a i l )   {  
     o s _ m a i l _ q u e u e _ t   * p t r   =   ( o s _ m a i l _ q u e u e _ t   * ) q u e u e _ i d ;  
  
     i f   ( p t r   = =   N U L L )   {  
         r e t u r n   o s E r r o r P a r a m e t e r ;  
     }  
     i f   ( m a i l   = =   N U L L )   {  
         r e t u r n   o s E r r o r V a l u e ;  
     }  
     r e t u r n   o s M e s s a g e Q u e u e P u t ( p t r - > m q _ i d ,   & m a i l ,   0 U ,   0 U ) ;  
 }  
  
 o s E v e n t   o s M a i l G e t   ( o s M a i l Q I d   q u e u e _ i d ,   u i n t 3 2 _ t   m i l l i s e c )   {  
     o s _ m a i l _ q u e u e _ t   * p t r   =   ( o s _ m a i l _ q u e u e _ t   * ) q u e u e _ i d ;  
     o s S t a t u s _ t               s t a t u s ;  
     o s E v e n t                     e v e n t ;  
     v o i d                         * m a i l ;  
  
     i f   ( p t r   = =   N U L L )   {  
         e v e n t . s t a t u s   =   o s E r r o r P a r a m e t e r ;  
         r e t u r n   e v e n t ;  
     }  
  
     s t a t u s   =   o s M e s s a g e Q u e u e G e t ( p t r - > m q _ i d ,   & m a i l ,   N U L L ,   m i l l i s e c ) ;  
     s w i t c h   ( s t a t u s )   {  
         c a s e   o s O K :  
             e v e n t . s t a t u s   =   o s E v e n t M a i l ;  
             e v e n t . v a l u e . p   =   m a i l ;  
             b r e a k ;  
         c a s e   o s E r r o r R e s o u r c e :  
             e v e n t . s t a t u s   =   o s O K ;  
             b r e a k ;  
         c a s e   o s E r r o r T i m e o u t :  
             e v e n t . s t a t u s   =   o s E v e n t T i m e o u t ;  
             b r e a k ;  
         d e f a u l t :  
             e v e n t . s t a t u s   =   s t a t u s ;  
             b r e a k ;  
     }  
     r e t u r n   e v e n t ;  
 }  
  
 o s S t a t u s   o s M a i l F r e e   ( o s M a i l Q I d   q u e u e _ i d ,   v o i d   * m a i l )   {  
     o s _ m a i l _ q u e u e _ t   * p t r   =   ( o s _ m a i l _ q u e u e _ t   * ) q u e u e _ i d ;  
  
     i f   ( p t r   = =   N U L L )   {  
         r e t u r n   o s E r r o r P a r a m e t e r ;  
     }  
     i f   ( m a i l   = =   N U L L )   {  
         r e t u r n   o s E r r o r V a l u e ;  
     }  
     r e t u r n   o s M e m o r y P o o l F r e e ( p t r - > m p _ i d ,   m a i l ) ;  
 }  
  
 # e n d i f     / /   M a i l   Q u e u e  
  
  
 # e n d i f     / /   o s C M S I S  
??/ *  
   *   C o p y r i g h t   ( c )   2 0 0 6 - 2 0 2 1 ,   R T - T h r e a d   D e v e l o p m e n t   T e a m  
   *  
   *   S P D X - L i c e n s e - I d e n t i f i e r :   A p a c h e - 2 . 0  
   *  
   *   C h a n g e   L o g s :  
   *   D a t e                       A u t h o r               N o t e s  
   *   2 0 0 7 - 0 1 - 2 1           B e r n a r d             t h e   f i r s t   v e r s i o n  
   *   2 0 1 0 - 0 5 - 0 4           B e r n a r d             a d d   r t _ d e v i c e _ i n i t   i m p l e m e n t a t i o n  
   *   2 0 1 2 - 1 0 - 2 0           B e r n a r d             a d d   d e v i c e   c h e c k   i n   r e g i s t e r   f u n c t i o n ,  
   *                                                           p r o v i d e d   b y   R o b   < r d e n t @ i i n e t . n e t . a u >  
   *   2 0 1 2 - 1 2 - 2 5           B e r n a r d             r e t u r n   R T _ E O K   i f   t h e   d e v i c e   i n t e r f a c e   n o t   e x i s t .  
   *   2 0 1 3 - 0 7 - 0 9           G r i s s i o m           a d d   r e f _ c o u n t   s u p p o r t  
   *   2 0 1 6 - 0 4 - 0 2           B e r n a r d             f i x   t h e   o p e n _ f l a g   i n i t i a l i z a t i o n   i s s u e .  
   * /  
  
 # i n c l u d e   < r t t h r e a d . h >  
 # i f   d e f i n e d ( R T _ U S I N G _ P O S I X )  
 # i n c l u d e   < r t d e v i c e . h >   / *   f o r   w q u e u e _ i n i t   * /  
 # e n d i f  
  
 # i f d e f   R T _ U S I N G _ D E V I C E  
  
 # i f d e f   R T _ U S I N G _ D E V I C E _ O P S  
 # d e f i n e   d e v i c e _ i n i t           ( d e v - > o p s - > i n i t )  
 # d e f i n e   d e v i c e _ o p e n           ( d e v - > o p s - > o p e n )  
 # d e f i n e   d e v i c e _ c l o s e         ( d e v - > o p s - > c l o s e )  
 # d e f i n e   d e v i c e _ r e a d           ( d e v - > o p s - > r e a d )  
 # d e f i n e   d e v i c e _ w r i t e         ( d e v - > o p s - > w r i t e )  
 # d e f i n e   d e v i c e _ c o n t r o l     ( d e v - > o p s - > c o n t r o l )  
 # e l s e  
 # d e f i n e   d e v i c e _ i n i t           ( d e v - > i n i t )  
 # d e f i n e   d e v i c e _ o p e n           ( d e v - > o p e n )  
 # d e f i n e   d e v i c e _ c l o s e         ( d e v - > c l o s e )  
 # d e f i n e   d e v i c e _ r e a d           ( d e v - > r e a d )  
 # d e f i n e   d e v i c e _ w r i t e         ( d e v - > w r i t e )  
 # d e f i n e   d e v i c e _ c o n t r o l     ( d e v - > c o n t r o l )  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   r e g i s t e r s   a   d e v i c e   d r i v e r   w i t h   s p e c i f i e d   n a m e .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   n a m e   t h e   d e v i c e   d r i v e r ' s   n a m e  
   *   @ p a r a m   f l a g s   t h e   c a p a b i l i t i e s   f l a g   o f   d e v i c e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e ,   R T _ E O K   o n   i n i t i a l i z a t i o n   s u c c e s s f u l l y .  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ r e g i s t e r ( r t _ d e v i c e _ t   d e v ,  
                                                         c o n s t   c h a r   * n a m e ,  
                                                         r t _ u i n t 1 6 _ t   f l a g s )  
 {  
         i f   ( d e v   = =   R T _ N U L L )  
                 r e t u r n   - R T _ E R R O R ;  
  
         i f   ( r t _ d e v i c e _ f i n d ( n a m e )   ! =   R T _ N U L L )  
                 r e t u r n   - R T _ E R R O R ;  
  
         r t _ o b j e c t _ i n i t ( & ( d e v - > p a r e n t ) ,   R T _ O b j e c t _ C l a s s _ D e v i c e ,   n a m e ) ;  
         d e v - > f l a g   =   f l a g s ;  
         d e v - > r e f _ c o u n t   =   0 ;  
         d e v - > o p e n _ f l a g   =   0 ;  
  
 # i f   d e f i n e d ( R T _ U S I N G _ P O S I X )  
         d e v - > f o p s   =   R T _ N U L L ;  
         r t _ w q u e u e _ i n i t ( & ( d e v - > w a i t _ q u e u e ) ) ;  
 # e n d i f  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   r e m o v e s   a   p r e v i o u s l y   r e g i s t e r e d   d e v i c e   d r i v e r  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e ,   R T _ E O K   o n   s u c c e s s f u l l y .  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ u n r e g i s t e r ( r t _ d e v i c e _ t   d e v )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & d e v - > p a r e n t ) ) ;  
  
         r t _ o b j e c t _ d e t a c h ( & ( d e v - > p a r e n t ) ) ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   i n i t i a l i z e s   a l l   r e g i s t e r e d   d e v i c e   d r i v e r  
   *  
   *   @ r e t u r n   t h e   e r r o r   c o d e ,   R T _ E O K   o n   s u c c e s s f u l l y .  
   *  
   *   @ d e p r e c a t e d   s i n c e   1 . 2 . x ,   t h i s   f u n c t i o n   i s   n o t   n e e d e d   b e c a u s e   t h e   i n i t i a l i z a t i o n  
   *                           o f   a   d e v i c e   i s   p e r f o r m e d   w h e n   a p p l i c a t i o n   o p e n s   i t .  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ i n i t _ a l l ( v o i d )  
 {  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   f i n d s   a   d e v i c e   d r i v e r   b y   s p e c i f i e d   n a m e .  
   *  
   *   @ p a r a m   n a m e   t h e   d e v i c e   d r i v e r ' s   n a m e  
   *  
   *   @ r e t u r n   t h e   r e g i s t e r e d   d e v i c e   d r i v e r   o n   s u c c e s s f u l ,   o r   R T _ N U L L   o n   f a i l u r e .  
   * /  
 r t _ d e v i c e _ t   r t _ d e v i c e _ f i n d ( c o n s t   c h a r   * n a m e )  
 {  
         r e t u r n   ( r t _ d e v i c e _ t ) r t _ o b j e c t _ f i n d ( n a m e ,   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
 }  
  
 # i f d e f   R T _ U S I N G _ H E A P  
 / * *  
   *   T h i s   f u n c t i o n   c r e a t e s   a   d e v i c e   o b j e c t   w i t h   u s e r   d a t a   s i z e .  
   *  
   *   @ p a r a m   t y p e ,   t h e   k i n d   t y p e   o f   t h i s   d e v i c e   o b j e c t .  
   *   @ p a r a m   a t t a c h _ s i z e ,   t h e   s i z e   o f   u s e r   d a t a .  
   *  
   *   @ r e t u r n   t h e   a l l o c a t e d   d e v i c e   o b j e c t ,   o r   R T _ N U L L   w h e n   f a i l e d .  
   * /  
 r t _ d e v i c e _ t   r t _ d e v i c e _ c r e a t e ( i n t   t y p e ,   i n t   a t t a c h _ s i z e )  
 {  
         i n t   s i z e ;  
         r t _ d e v i c e _ t   d e v i c e ;  
  
         s i z e   =   R T _ A L I G N ( s i z e o f ( s t r u c t   r t _ d e v i c e ) ,   R T _ A L I G N _ S I Z E ) ;  
         a t t a c h _ s i z e   =   R T _ A L I G N ( a t t a c h _ s i z e ,   R T _ A L I G N _ S I Z E ) ;  
         / *   u s e   t h e   t o t a l   s i z e   * /  
         s i z e   + =   a t t a c h _ s i z e ;  
  
         d e v i c e   =   ( r t _ d e v i c e _ t ) r t _ m a l l o c ( s i z e ) ;  
         i f   ( d e v i c e )  
         {  
                 r t _ m e m s e t ( d e v i c e ,   0 x 0 ,   s i z e o f ( s t r u c t   r t _ d e v i c e ) ) ;  
                 d e v i c e - > t y p e   =   ( e n u m   r t _ d e v i c e _ c l a s s _ t y p e ) t y p e ;  
         }  
  
         r e t u r n   d e v i c e ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   d e s t r o y   t h e   s p e c i f i c   d e v i c e   o b j e c t .  
   *  
   *   @ p a r a m   d e v ,   t h e   s p e c i f i c   d e v i c e   o b j e c t .  
   * /  
 v o i d   r t _ d e v i c e _ d e s t r o y ( r t _ d e v i c e _ t   d e v )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ i s _ s y s t e m o b j e c t ( & d e v - > p a r e n t )   = =   R T _ F A L S E ) ;  
  
         r t _ o b j e c t _ d e t a c h ( & ( d e v - > p a r e n t ) ) ;  
  
         / *   r e l e a s e   t h i s   d e v i c e   o b j e c t   * /  
         r t _ f r e e ( d e v ) ;  
 }  
 # e n d i f  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   i n i t i a l i z e   t h e   s p e c i f i e d   d e v i c e  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *  
   *   @ r e t u r n   t h e   r e s u l t  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ i n i t ( r t _ d e v i c e _ t   d e v )  
 {  
         r t _ e r r _ t   r e s u l t   =   R T _ E O K ;  
  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
  
         / *   g e t   d e v i c e _ i n i t   h a n d l e r   * /  
         i f   ( d e v i c e _ i n i t   ! =   R T _ N U L L )  
         {  
                 i f   ( ! ( d e v - > f l a g   &   R T _ D E V I C E _ F L A G _ A C T I V A T E D ) )  
                 {  
                         r e s u l t   =   d e v i c e _ i n i t ( d e v ) ;  
                         i f   ( r e s u l t   ! =   R T _ E O K )  
                         {  
                                 r t _ k p r i n t f ( " T o   i n i t i a l i z e   d e v i c e : % s   f a i l e d .   T h e   e r r o r   c o d e   i s   % d \ n " ,  
                                                       d e v - > p a r e n t . n a m e ,   r e s u l t ) ;  
                         }  
                         e l s e  
                         {  
                                 d e v - > f l a g   | =   R T _ D E V I C E _ F L A G _ A C T I V A T E D ;  
                         }  
                 }  
         }  
  
         r e t u r n   r e s u l t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   o p e n   a   d e v i c e  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   o f l a g   t h e   f l a g s   f o r   d e v i c e   o p e n  
   *  
   *   @ r e t u r n   t h e   r e s u l t  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ o p e n ( r t _ d e v i c e _ t   d e v ,   r t _ u i n t 1 6 _ t   o f l a g )  
 {  
         r t _ e r r _ t   r e s u l t   =   R T _ E O K ;  
  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         / *   i f   d e v i c e   i s   n o t   i n i t i a l i z e d ,   i n i t i a l i z e   i t .   * /  
         i f   ( ! ( d e v - > f l a g   &   R T _ D E V I C E _ F L A G _ A C T I V A T E D ) )  
         {  
                 i f   ( d e v i c e _ i n i t   ! =   R T _ N U L L )  
                 {  
                         r e s u l t   =   d e v i c e _ i n i t ( d e v ) ;  
                         i f   ( r e s u l t   ! =   R T _ E O K )  
                         {  
                                 r t _ k p r i n t f ( " T o   i n i t i a l i z e   d e v i c e : % s   f a i l e d .   T h e   e r r o r   c o d e   i s   % d \ n " ,  
                                                       d e v - > p a r e n t . n a m e ,   r e s u l t ) ;  
  
                                 r e t u r n   r e s u l t ;  
                         }  
                 }  
  
                 d e v - > f l a g   | =   R T _ D E V I C E _ F L A G _ A C T I V A T E D ;  
         }  
  
         / *   d e v i c e   i s   a   s t a n d   a l o n e   d e v i c e   a n d   o p e n e d   * /  
         i f   ( ( d e v - > f l a g   &   R T _ D E V I C E _ F L A G _ S T A N D A L O N E )   & &  
                 ( d e v - > o p e n _ f l a g   &   R T _ D E V I C E _ O F L A G _ O P E N ) )  
         {  
                 r e t u r n   - R T _ E B U S Y ;  
         }  
  
         / *   c a l l   d e v i c e _ o p e n   i n t e r f a c e   * /  
         i f   ( d e v i c e _ o p e n   ! =   R T _ N U L L )  
         {  
                 r e s u l t   =   d e v i c e _ o p e n ( d e v ,   o f l a g ) ;  
         }  
         e l s e  
         {  
                 / *   s e t   o p e n   f l a g   * /  
                 d e v - > o p e n _ f l a g   =   ( o f l a g   &   R T _ D E V I C E _ O F L A G _ M A S K ) ;  
         }  
  
         / *   s e t   o p e n   f l a g   * /  
         i f   ( r e s u l t   = =   R T _ E O K   | |   r e s u l t   = =   - R T _ E N O S Y S )  
         {  
                 d e v - > o p e n _ f l a g   | =   R T _ D E V I C E _ O F L A G _ O P E N ;  
  
                 d e v - > r e f _ c o u n t + + ;  
                 / *   d o n ' t   l e t   b a d   t h i n g s   h a p p e n   s i l e n t l y .   I f   y o u   a r e   b i t t e n   b y   t h i s   a s s e r t ,  
                   *   p l e a s e   s e t   t h e   r e f _ c o u n t   t o   a   b i g g e r   t y p e .   * /  
                 R T _ A S S E R T ( d e v - > r e f _ c o u n t   ! =   0 ) ;  
         }  
  
         r e t u r n   r e s u l t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   c l o s e   a   d e v i c e  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *  
   *   @ r e t u r n   t h e   r e s u l t  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ c l o s e ( r t _ d e v i c e _ t   d e v )  
 {  
         r t _ e r r _ t   r e s u l t   =   R T _ E O K ;  
  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         i f   ( d e v - > r e f _ c o u n t   = =   0 )  
                 r e t u r n   - R T _ E R R O R ;  
  
         d e v - > r e f _ c o u n t - - ;  
  
         i f   ( d e v - > r e f _ c o u n t   ! =   0 )  
                 r e t u r n   R T _ E O K ;  
  
         / *   c a l l   d e v i c e _ c l o s e   i n t e r f a c e   * /  
         i f   ( d e v i c e _ c l o s e   ! =   R T _ N U L L )  
         {  
                 r e s u l t   =   d e v i c e _ c l o s e ( d e v ) ;  
         }  
  
         / *   s e t   o p e n   f l a g   * /  
         i f   ( r e s u l t   = =   R T _ E O K   | |   r e s u l t   = =   - R T _ E N O S Y S )  
                 d e v - > o p e n _ f l a g   =   R T _ D E V I C E _ O F L A G _ C L O S E ;  
  
         r e t u r n   r e s u l t ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   r e a d   s o m e   d a t a   f r o m   a   d e v i c e .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   p o s   t h e   p o s i t i o n   o f   r e a d i n g  
   *   @ p a r a m   b u f f e r   t h e   d a t a   b u f f e r   t o   s a v e   r e a d   d a t a  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *  
   *   @ r e t u r n   t h e   a c t u a l l y   r e a d   s i z e   o n   s u c c e s s f u l ,   o t h e r w i s e   n e g a t i v e   r e t u r n e d .  
   *  
   *   @ n o t e   s i n c e   0 . 4 . 0 ,   t h e   u n i t   o f   s i z e / p o s   i s   a   b l o c k   f o r   b l o c k   d e v i c e .  
   * /  
 r t _ s i z e _ t   r t _ d e v i c e _ r e a d ( r t _ d e v i c e _ t   d e v ,  
                                                   r t _ o f f _ t         p o s ,  
                                                   v o i d               * b u f f e r ,  
                                                   r t _ s i z e _ t       s i z e )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         i f   ( d e v - > r e f _ c o u n t   = =   0 )  
         {  
                 r t _ s e t _ e r r n o ( - R T _ E R R O R ) ;  
                 r e t u r n   0 ;  
         }  
  
         / *   c a l l   d e v i c e _ r e a d   i n t e r f a c e   * /  
         i f   ( d e v i c e _ r e a d   ! =   R T _ N U L L )  
         {  
                 r e t u r n   d e v i c e _ r e a d ( d e v ,   p o s ,   b u f f e r ,   s i z e ) ;  
         }  
  
         / *   s e t   e r r o r   c o d e   * /  
         r t _ s e t _ e r r n o ( - R T _ E N O S Y S ) ;  
  
         r e t u r n   0 ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   w r i t e   s o m e   d a t a   t o   a   d e v i c e .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   p o s   t h e   p o s i t i o n   o f   w r i t t e n  
   *   @ p a r a m   b u f f e r   t h e   d a t a   b u f f e r   t o   b e   w r i t t e n   t o   d e v i c e  
   *   @ p a r a m   s i z e   t h e   s i z e   o f   b u f f e r  
   *  
   *   @ r e t u r n   t h e   a c t u a l l y   w r i t t e n   s i z e   o n   s u c c e s s f u l ,   o t h e r w i s e   n e g a t i v e   r e t u r n e d .  
   *  
   *   @ n o t e   s i n c e   0 . 4 . 0 ,   t h e   u n i t   o f   s i z e / p o s   i s   a   b l o c k   f o r   b l o c k   d e v i c e .  
   * /  
 r t _ s i z e _ t   r t _ d e v i c e _ w r i t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ o f f _ t         p o s ,  
                                                     c o n s t   v o i d   * b u f f e r ,  
                                                     r t _ s i z e _ t       s i z e )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         i f   ( d e v - > r e f _ c o u n t   = =   0 )  
         {  
                 r t _ s e t _ e r r n o ( - R T _ E R R O R ) ;  
                 r e t u r n   0 ;  
         }  
  
         / *   c a l l   d e v i c e _ w r i t e   i n t e r f a c e   * /  
         i f   ( d e v i c e _ w r i t e   ! =   R T _ N U L L )  
         {  
                 r e t u r n   d e v i c e _ w r i t e ( d e v ,   p o s ,   b u f f e r ,   s i z e ) ;  
         }  
  
         / *   s e t   e r r o r   c o d e   * /  
         r t _ s e t _ e r r n o ( - R T _ E N O S Y S ) ;  
  
         r e t u r n   0 ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   p e r f o r m   a   v a r i e t y   o f   c o n t r o l   f u n c t i o n s   o n   d e v i c e s .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   c m d   t h e   c o m m a n d   s e n t   t o   d e v i c e  
   *   @ p a r a m   a r g   t h e   a r g u m e n t   o f   c o m m a n d  
   *  
   *   @ r e t u r n   t h e   r e s u l t  
   * /  
 r t _ e r r _ t   r t _ d e v i c e _ c o n t r o l ( r t _ d e v i c e _ t   d e v ,   i n t   c m d ,   v o i d   * a r g )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         / *   c a l l   d e v i c e _ w r i t e   i n t e r f a c e   * /  
         i f   ( d e v i c e _ c o n t r o l   ! =   R T _ N U L L )  
         {  
                 r e t u r n   d e v i c e _ c o n t r o l ( d e v ,   c m d ,   a r g ) ;  
         }  
  
         r e t u r n   - R T _ E N O S Y S ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   t h e   r e c e p t i o n   i n d i c a t i o n   c a l l b a c k   f u n c t i o n .   T h i s   c a l l b a c k   f u n c t i o n  
   *   i s   i n v o k e d   w h e n   t h i s   d e v i c e   r e c e i v e s   d a t a .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   r x _ i n d   t h e   i n d i c a t i o n   c a l l b a c k   f u n c t i o n  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t  
 r t _ d e v i c e _ s e t _ r x _ i n d i c a t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ e r r _ t   ( * r x _ i n d ) ( r t _ d e v i c e _ t   d e v ,   r t _ s i z e _ t   s i z e ) )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         d e v - > r x _ i n d i c a t e   =   r x _ i n d ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 / * *  
   *   T h i s   f u n c t i o n   w i l l   s e t   t h e   i n d i c a t i o n   c a l l b a c k   f u n c t i o n   w h e n   d e v i c e   h a s  
   *   w r i t t e n   d a t a   t o   p h y s i c a l   h a r d w a r e .  
   *  
   *   @ p a r a m   d e v   t h e   p o i n t e r   o f   d e v i c e   d r i v e r   s t r u c t u r e  
   *   @ p a r a m   t x _ d o n e   t h e   i n d i c a t i o n   c a l l b a c k   f u n c t i o n  
   *  
   *   @ r e t u r n   R T _ E O K  
   * /  
 r t _ e r r _ t  
 r t _ d e v i c e _ s e t _ t x _ c o m p l e t e ( r t _ d e v i c e _ t   d e v ,  
                                                     r t _ e r r _ t   ( * t x _ d o n e ) ( r t _ d e v i c e _ t   d e v ,   v o i d   * b u f f e r ) )  
 {  
         R T _ A S S E R T ( d e v   ! =   R T _ N U L L ) ;  
         R T _ A S S E R T ( r t _ o b j e c t _ g e t _ t y p e ( & d e v - > p a r e n t )   = =   R T _ O b j e c t _ C l a s s _ D e v i c e ) ;  
  
         d e v - > t x _ c o m p l e t e   =   t x _ d o n e ;  
  
         r e t u r n   R T _ E O K ;  
 }  
  
 # e n d i f  